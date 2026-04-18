#include <iostream>
using namespace std;

int main() {
	/*
    ១. បញ្ចូលឈ្មោះ
    ២. ភេទ
    ៣. ថ្ងៃកំណើត
    ៤. ទីកន្លែងកំណើត
    ៥. អាយុ
    ៦. បធ្យមភាគ
    ៧. ចំណាត់ថ្នាក់q
    ៨. GPA
    */
   
    string name, gender, dob, pob;
    int age, rank;
    float average;
    char gpa;

    cout << "--------fill information----------" << endl;

    cout<< "Enter you name : ";
    cin >> name;

    cout << "Gender :";
    cin >> gender;

    cout << "Date of Birth : ";
    cin >> dob;

    cout << "Place of Birth : ";
    cin >> pob;

    cout << "Enter you age : ";
    cin >> age;

    cout << "Your average is : ";
    cin >> average;

    cout << "Rank : ";
    cin >> rank;

    cout << "GPA :";
    cin >> gpa;




    return 0;
}
