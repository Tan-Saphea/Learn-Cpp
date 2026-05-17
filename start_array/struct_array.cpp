#include<iostream>
using namespace std;

// srtuct
struct Person{
    int id;
    string name;
    string gender;
    string address;
};

int main(){
    // creating an array of struct
    Person p[4];
    // assigning values to the struct array
    p[0].id = 1;
    p[0].name = "John Doe";
    p[0].gender = "Male";
    p[0].address = "123 Main St, Anytown, USA";

    p[1].id = 2;
    p[1].name = "Jane Smith";
    p[1].gender = "Female";
    p[1].address = "456 Elm St, Anytown, USA";

    p[2].id = 3;
    p[2].name = "Bob Johnson";
    p[2].gender = "Male";
    p[2].address = "789 Oak St, Anytown, USA";

    p[3].id = 4;
    p[3].name = "Alice Brown";
    p[3].gender = "Female";
    p[3].address = "321 Pine St, Anytown, USA";

    // printing the values of the struct array
    for(int i = 0; i < 1; i++){
        cout << "ID: " << p[i].id << endl;
        cout << "Name: " << p[i].name << endl;
        cout << "Gender: " << p[i].gender << endl;
        cout << "Address: " << p[i].address << endl;
        cout << endl;
    }
    
    return 0;
}