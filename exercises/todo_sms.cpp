#include <iostream>
#include <string>
using namespace std;

int main() {
   int n;
   cout << "Enter number of students :";
   cin >> n;

   string name;
   float math, english, computer;
   float total, average;
   char grade;

   for(int i = 1; i <= n; i++){
    cout << "\n--------Student "<< i << "-------"<< endl;

    cin.ignore(); //កុំឲ្យ getline skip
    cout << "Enter name : ";
    getline(cin, name); //អាចបញ្ចូលឈ្មោះដែលមានដកឃ្លា

    cout << "Enter math :";
    cin >> math;
    
    cout << "Enter english :";
    cin >> english;

    cout << "Enter computer :";
    cin >> computer;

    total = math + english + computer;
    average = total / 3;

    if(average >= 90)grade = 'A';
    else if (average >= 80) grade = 'B';
    else if (average >= 70) grade = 'C';
    else if (average >= 60) grade = 'D';
    else if (average >= 50) grade = 'E';
    else grade = 'F';
    
    cout << "\nResult for " << name << endl;
    cout << "Total : " << total << endl;
    cout << "Average : " << average << endl;
    cout << "Grade : " << grade << endl;

   }
   cout << "\n All students processed!!" << endl;


    return 0;
}