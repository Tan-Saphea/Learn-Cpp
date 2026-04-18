#include <iostream>
using namespace std;

int main(){
   int number;

   cout << "Enter an integer : ";
   cin >> number;

   if (number >= 0)
   {
    cout << "Your entered a positive integer :" << number <<endl;
   }else{
    cout << "Your enterd a negetive integer :" << number << endl;
   }

   cout << "This line is always executed." << endl;
}