// Generic Type header file

template<typename T>
class vector{
    // Data members
    T *arr;
    int cs;
    int ms;

public:
    vector(int max_size=1) {
        cs=0;
        ms=max_size;
        arr = new T[ms];
    }

    void push_back(const T d){
        // Two case
        if(cs==ms){
            // create a new array and delete the old one, double the capacity
            T *oldArr = arr;
            ms = 2*ms;
            arr = new T[ms];
            // copy elements
            for(int i=0; i<cs; i++)
                arr[i] = oldArr[i];
            // delete
            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back(){
        if(cs>=0)
            cs--;
    }

    bool isEmpty(){
        return cs ==0;
    }

    // front, back, at(i), []
    T front() const{
        return arr[0];
    }

    T back() const{
        return arr[cs-1];
    }

    T at(int i) const{
        return arr[i];
    }

    int size() const{
        return cs;
    }

    int capacity() const{
        return ms;
    }

    T operator[](const int i){
        return arr[i];
    }

};