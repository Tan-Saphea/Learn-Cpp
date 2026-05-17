#include<iostream>
using namespace std;

// parent class
class Parent{
    public:
        string name;
    
    void showName(){
        cout << "Parent name: " << name << endl;
    }
};

// child child
class Child : public Parent{
    public:
        int id;
    
    void showId(){
        cout << "Child id : " << id << endl;
    }
};

int main(){
    cout << "======Inheritance in C++======" << endl;

    // creating object of child class
    Child c;
    c.name = "John"; // accessing parent class member
    c.id = 1; // accessing child class member
    
    c.showName();
    c.showId();


    return 0;
}