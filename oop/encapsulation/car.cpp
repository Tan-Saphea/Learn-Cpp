#include<iostream>
using namespace std;

// price of the car
class Car{
    // data members
    private:
        float price;

    // member functions
    public:
        // setter
        void setPrice(float price){
            this -> price = price;
        }

        // getter
        float getPrice(){
            return price;
        }
};

int main()
{
    cout<<"==== Encapsulation in C++ ===="<<endl;
    
    Car c;
    c.setPrice(500000);
    cout << "Price of the car: " << c.getPrice() << "$" << endl;
    
    return 0;
}