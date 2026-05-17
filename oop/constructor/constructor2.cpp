#include<iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;
    
    Person(string name, int age){
        this -> name = name;
        this -> age = age;
    }

    void showInfo(){
        cout << "\nName : " << name << endl;
        cout << "Age : " << age << "Years old. \n"<< endl;
    }
};

int main(){
    // creating object of class Person
    Person p1("Alice", 30);
    p1.showInfo();

    Person p2("Phea", 25);
    p2.showInfo();

    return 0;
}