#include<iostream>
using namespace std;

struct Person{
    int id;
    string name;
    int age;
    string address;
};
int main(){
    Person p;

    p.id = 1;
    p.name = "John Doe";
    p.age = 30;
    p.address = "123 Main St, Anytown, USA";

    cout << "ID: " << p.id << endl;
    cout << "Name : " << p.name << endl;
    cout << "Age : " << p.age << endl;
    cout << "Address : " << p.address << endl;
    

    return 0;
}