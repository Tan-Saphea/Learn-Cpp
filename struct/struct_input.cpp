#include <iostream>
using namespace std;

// struct
struct Student{
    int id;
    string name;
    int age;
    string level;
};

int main() {
    Student s[3]; // array of struct

    for(int i=0; i<3; i++){
        cout << "Enter id :";
        cin >> s[i].id;

        cout << "Enter name :";
        cin >> s[i].name;

        cout << "Enter age :";
        cin >> s[i].age;

        cout << "Enter level :";
        cin >> s[i].level;

        cout << "-----------------------------" << endl;

    }

    // print data
    cout << "ID\tName\tAge\tLevel" << endl;
    for(int i=0; i<3; i++){
        cout << s[i].id << "\t" << s[i].name << "\t" << s[i].age << "\t" << s[i].level << endl;
        cout << "-----------------------------" << endl;
    }

    return 0;
}