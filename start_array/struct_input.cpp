#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    int age;
    string level;
};

int main(){
    Student s[3]; // array of struct

    for (int i = 0; i < 3; i++ ){
        cout << " Enter ID : ";
        cin >> s[i].id;

        cout << " Enter Name : ";
        cin >> s[i].name;

        cout << " Enter Age : ";
        cin >> s[i].age;

        cout << " Enter Level : ";
        cin >> s[i].level;

        cout << "------------------------"<< endl;
    }

    // print data
    cout << "ID\tName\tAge\tLevel" << endl;
    for (int i = 0; i < 3; i++){
        cout << s[i].id << "\t" << s[i].name << "\t" << s[i].age << "\t" << s[i].level << endl;
    }
    return 0;
}