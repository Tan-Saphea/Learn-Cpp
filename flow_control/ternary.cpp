#include <iostream>
using namespace std;

int main(){
    // if else
    int num = -10;
    if (num > 0 )
    {
        cout << "Positive number" << endl;
    }else{
        cout << "Negetive number" << endl;
    }
    // ternary operator
    cout << (num > 0 ? "Positive Number" : "Negative Number") << endl;
    


    return 0;
}