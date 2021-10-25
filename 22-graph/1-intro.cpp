/*
GRAPH - network of nodes (vectices) , edges (connecting nodes)

types
- weighted and unweighted graph
- directed and undirected graph

storing a graph
- adjacency list (list of lists, array of list, vector of lists, hashmap<int, list>)
- adjacency matrix
- edge list
- 2d matric (implecit graph)

Adjacency list
- list of lists
- array of lists
- vector of lists
- hashmap<int, list>
    Adv : 
    - finding neighbour of node

Adjacency Matrix
- if v nodes then v*v matrix required to store
- put 1 when there is edge (like 2,1 or 1,2 have 1 if there is edge between them)
    Adv : 
    - both weighted and unweighted, directed or undirected graphs can be plot
    Dis:
    - waste more space
    - more time taken to know neighbours

Edge List
- list of triplet storing edges ( weight, src, dest )

Implicit graphs
- used in flood fill
- 4 and 8 way connectivity

APPLICATION OF GRAPH
- Shortest path
- Social networks
- Shortest cyclic route (school van, delivery boy)
- Dependency graphs (directed acyclic graphs)
- Routing Algorithms
- Machine learning (Computation graphs)
- Computer vision, flood fill
- Web Crawlers
- Physics and chemistry
- Graph databases ex Neo4j - recommendation system, fraud detection & AI Applications
- more like linguistics, social science, biology & neuroscience and more


*/