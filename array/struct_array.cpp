#include <iostream>
using namespace std;

// struct
struct Person{
    int id;
    string name;
    string gender;
    int age;
    string address;
};

int main() {
    // create an array of struct
    Person p[4];
    // assign values to the struct array
    p[0].id = 1;
    p[0].name = "John";
    p[0].gender = "Male";
    p[0].age = 25;
    p[0].address = "New York";

    p[1].id = 2;
    p[1].name = "Jane";
    p[1].gender = "Female";
    p[1].age = 30;
    p[1].address = "Los Angeles";

    p[2].id = 3;
    p[2].name = "Bob";
    p[2].gender = "Male";
    p[2].age = 35;
    p[2].address = "Chicago";

    p[3].id = 4;
    p[3].name = "Alice";
    p[3].gender = "Female";
    p[3].age = 28;
    p[3].address = "Houston";

    // print the struct array
    for(int i = 0; i < 4; i++){
        cout << p[i].id << " " << p[i].name << " " << p[i].gender << " " << p[i].age << " " << p[i].address << endl;
    }

    return 0;
}