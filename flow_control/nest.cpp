#include <iostream>
using namespace std;

int main(){
    int num = 10;

    if (num > 0)
    {
        cout << "Positive number" << endl;

        if (num % 2 == 0)
        {
            cout << "Even number" << endl;
        }else{
            cout << "Odd number" << endl;
        }
    }else{
        cout << "Negetive number" << endl;
    }
    

    return 0;
}