#include<iostream>
using namespace std;

int main(){
    // switch statment
    int month = 4;

    switch (month)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;

    default:
        cout << "Invalid month" << endl;
        break;
    }

    return 0;
}