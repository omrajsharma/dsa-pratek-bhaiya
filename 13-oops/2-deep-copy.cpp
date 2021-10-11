/*
SHALLOW COPY - using name pointer for name, when copy constructor called then new object starts pointing to the same memory as of old object. if any change made in one object will reflect in other in name only if its is dynamic memory.

default copy constructor follows shallow copy thats why we use deep copy.

only for dynamically allocated pointers
*/

#include <iostream>
#include <cstring>
using namespace std;

class product{
    int id;
    char *name;
    int mrp;
    int selling_price;

public:
// CONSTRUCTORS
    product(){
        id = 0;
        mrp = 0;
        selling_price = 0;
    }

    // constructor overloading
    product(int id, char *n, int mrp, int selling_price){    
        this->id = id;     // this - a special pointer pointing to the current object
        (*this).mrp = mrp;  // another way
        this->selling_price = selling_price;
        // DEEP COPY
        name = new char[strlen(n)+1];
        strcpy(name, n);
    }

    // copy constructor - present by default (passed by reference)
    product(product &p){
        id = p.id;
        // SHALLOW COPY
        // name = p.name;
        // DEEP COPY
        name = new char[strlen(p.name)+1];
        strcpy(name, p.name);
        mrp = p.mrp;
        selling_price = p.selling_price;
    }
    

// SETTERS - helps in protecting data
    void setId(int i){
        id = i;
    }
    void setMrp(int p){
        if(p>0)     mrp = p;
    }
    void setSellingPrice(int p){
        if(mrp>p)   selling_price = p;
    }
    void setName(char *n){
        strcpy(name, n);
    }

// GETTERS
    int getId(){
        return id;
    }
    int getMrp(){
        return mrp;
    }
    int getSellingPrice(){
        return selling_price;
    }

// DISPLAY
    void display(){
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "MRP : " << mrp << endl;
        cout << "Selling Price : " << selling_price << endl;
        cout << "------------------------------------------" << endl;
    }

// COPY ASSIGNMENT OPERATOR
void operator=(product &p){
    id = p.id;
    // DEEP COPY
    name = new char[strlen(p.name)+1];
    strcpy(name, p.name);
    mrp = p.mrp;
    selling_price = p.selling_price;
}

// DESTRUCTORS
~product(){
    // user defined destructor is needed when class contains pointers to dynamically allocated memory
    cout << "Deleting... " << name << endl;
    if(name != NULL)    delete [] name;
    name = NULL;
}
};

int main(){
    product camera(1, "canon eos 200d", 40000, 35000);
    product oldCam(camera);

    oldCam.setName("nikon 5600d");
    oldCam.setMrp(37000);

    camera.display();
    oldCam.display();

    // copy assignment operator
    product  newCam;    // constructor called
    newCam = camera;    // copy assignment operator called - does shallow copying by dafult
    newCam.setName("new camera");
    newCam.display();


    return 0;
}