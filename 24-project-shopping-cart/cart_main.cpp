#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include "datamodel.h"
using namespace std;

vector<Product> allProduct = {
    Product(1,"Apple", 40),
    Product(2,"Guava", 20),
    Product(3,"Mango", 35),
    Product(4,"Banana", 20),
    Product(4,"Strawberry", 60),
    Product(6,"Pineapple", 40)
};

Product *chooseProduct(){
    // Display product
    string productList;

    cout << "Available Products" << endl;
    for(auto product : allProduct){
        productList.append(product.getDisplayName());
    }
    cout << productList << endl;

    cout << "-----------------------" << endl;
    string choice;
    cin >> choice;

    for(int i=0; i<allProduct.size(); i++){
        if(allProduct[i].getShortName() == choice){
            return &allProduct[i];
        }
    }
    cout << "Product not found" << endl;
    return NULL;
}

bool checkout(Cart &cart){
    if(cart.isEmpty())  return false;

    int total = cart.getTotal();

    cout << "Pay In Cash : ";

    int paid;
    cin >> paid;

    if(paid >= total){
        cout << "change " << paid-total << endl;
        cout << "Thank you for shopping" << endl;
        return true;
    } else {
        cout << "Not Enought Cash!!" << endl;
        return false;
    }
}

int main(){
    
    char action;
    Cart cart;
    
    while(true){
        cout << "### Selection Action ###" << endl;
        cout << "(A)dd item, (V)iew cart, (C)heckout" << endl;

        cin >> action;
        if(action=='A'){
            // add to cart
                // view all the products
                Product * product = chooseProduct();
                if(product!=NULL){
                    cout << "Added to cart " << product->getDisplayName() << endl;
                    // adding item to cart
                    cart.addProduct(*product);
                }

                // add to cart

        } else if(action=='V'){
            // view the cart
            cout << "------------------------" << endl;
            cout << cart.viewCart();
            cout << "------------------------" << endl;
        } else {
            // checkout
            cart.viewCart();
            if(checkout(cart)){
                break;
            }
        }
    }

    return 0;
}