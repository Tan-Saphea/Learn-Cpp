#include <iostream>
using namespace std;

struct Person{
    int id;
    string name;
    int age;
    string city;
};

int main() {
    Person p;
    p.id = 1;
    p.name = "John";
    p.age = 25;
    p.city = "New York";

    cout << "ID : " << p.id << endl;
    cout << "Name : " << p.name << endl;
    cout << "Age : " << p.age << endl;
    cout << "City : " << p.city << endl;

    return 0;
}