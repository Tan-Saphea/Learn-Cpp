#include<iostream>
using namespace std;

class Student{
    public:
    int id;
    string name;

    void input(){
        cout << "Enter id: ";
        cin >> id;

        cout << "Enter name: ";
        cin >> name;
    }

    void output(){
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main(){
    Student s1, s2, s3;

    s1.input();
    s1.output();

    s2.input();
    s2.output();

    s3.input();
    s3.output();

    return 0;
}

