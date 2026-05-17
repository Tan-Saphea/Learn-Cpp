#include<iostream>
using namespace std;

void printDetails(string name, int age, string city){
    cout<<"Name : " << name << endl;
    cout<<"Age : " << age << endl;
    cout<<"City : " << city << endl; 
}

int main(){
    printDetails("Phea", 25, "Phnom Penh");

    return 0;
}