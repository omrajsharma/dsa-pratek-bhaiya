#include <iostream>
#include <cstring>
using namespace std;

class product{
    int id;
    char name[100];
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
        strcpy(name, n);
    }

        // copy constructor - present by default (passed by reference)
    product(product &p){
        id = p.id;
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

// DESTRUCTORS
};

int main(){
    product camera(1, "canon eos 200d", 40000, 35000);
    camera.display();

    // Copy constructor used here
    product secondCam(camera);
    product thirdCam = secondCam;
    secondCam.display();
    thirdCam.display();

    return 0;
}