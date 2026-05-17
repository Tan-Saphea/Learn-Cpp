#include<iostream>
using namespace std;

class Car {
    // data members
    public:
        string brand;
    
    // constructor
    Car(){
        brand = "Toyota";
    }

    // member functions
    void showBrand(){
        cout << "Car brand: " << brand << endl;
    }
};

int main()
{
    cout<<"==== CONSTRUCTOR ===="<<endl;
    
    // create an object of the Car class
    Car c;
    c.showBrand();

    return 0;
    
}  