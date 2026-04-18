#include <iostream>
using namespace std;

int main() {
    float a, b; 
    char op; // + - * /
    char choice;

    for( ; ; ){ //ឥតដែនកំណត់ infinite loop
        cout << "\nEnter first number :";
        cin >> a;

        cout << "Enter operator (+ - * /) :";
        cin >> op;

        cout << "Enter second number :";
        cin >> b;
        
        if(op == '+'){
            cout << "Result :" << a + b << endl;
        }else if(op == '-'){
            cout << "Result :" << a - b << endl;
        }else if(op == '*'){
            cout << "Result :" << a * b << endl;
        }else if(op == '/'){
            if(b != 0){
                cout << "Result :" << a / b << endl;
            }else{
                cout<< "Error : Cannot divide by zero!!" << endl;
            }
        }else{
            cout << "Error : Invalid Operator!!" << endl;
        }

        cout <<"\nDo you want to continue? (y/n) :";
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            break;
        }

    }
    cout<< "\nCalculator Closed!!" << endl;
    return 0;
}