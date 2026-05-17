#include <iostream>
using namespace std;

// struct
struct Student{
    int id;
    string name;
    string gender;
    int age;
    float gpa;

    // function for input data
    void inputData(){
        cout << "==========Input==========" << endl;
        cout << "Enter your id : "; cin >> id;
        cout << "Enter your name : "; cin >> name;
        cout << "Enter your gender : "; cin >> gender;
        cout << "Enter your age : "; cin >> age;
        cout << "Enter your gpa : "; cin >> gpa;
    }

    // function for display data or output data
    void outputData(){
        cout << "==========Output==========" << endl;
        cout << "ID               = " << id << endl;
        cout << "Name             = " << name << endl;
        cout << "Gender           = " << gender << endl;
        cout << "Age              = " << age << endl;
        cout << "GPA              = " << gpa << endl;
    }
};

int main() {
    Student student1; // create object of struct
    Student student2; // create object of struct
    Student student3; // create object of struct

    // input data for students
    student1.inputData();
    student1.outputData();

    student2.inputData();
    student2.outputData();

    student3.inputData();
    student3.outputData();

    return 0;
}