#include <iostream>
using namespace std;

int main() {
    int n;
    char choice;

    do{
        cout << "Enter number :";
        cin >> n;

        for(int i = 1; i <= 10; i++){
            // n x i = n*i
            // 1 x 4 = 4
            cout << n << " x " << i << " = " << n * i << endl;
        }
        cout << "\nDo you want to continue? (y/n) :";
        cin >> choice;

    }while(choice == 'y' || choice == 'Y');
    cout << "\nProgram ended!!." << endl;
    

    return 0;
}