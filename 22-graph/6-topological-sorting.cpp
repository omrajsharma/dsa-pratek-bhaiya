/*
Topological sorting for Directed Acyclic Graph (DAG) 

Application
- Scheduling jobs from the given dependencies among jobs. computer science, application of this type arise in 
- Instruction scheduling
- ordering of formula cell evaluation when recomputing formula values in spread sheets
- Logic synthesis
- Determining the order of compilation task to perform in make files, data serialization, and resolving symbol dependencies in linkers


Kahn's Algorithm (Modified BFS)
- calculate indegree
- calculate bfs

*/

#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

class Graph {
    list<int> *l;
    int V;

public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
    
    void addEdge(int x , int y){
        l[x].push_back(y);
    }

    void topological_sort(){
        vector<int> indegree(V,0);

        // Iterator over all edges
        for(int i=0; i<V; i++){
            for(auto nbr : l[i]){
                indegree[nbr]++;
            }
        }

        queue<int> q;

        for(int i=0; i<V; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node = q.front();
            cout << node << ' ';
            q.pop();

            for(auto nbr : l[node]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }

    }
    
};


int main(){
    Graph g(6);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(4,5);
    g.addEdge(1,4);
    g.addEdge(1,2);

    g.topological_sort();

    

    return 0;
}