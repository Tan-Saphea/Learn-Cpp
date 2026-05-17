#include<iostream>
using namespace std;

int main(){
    string fruits[4] = {"Apple", "Banana", "Cherry", "Mango"};
    
    cout << fruits[0] << endl;
    cout << fruits[1] << endl;
    cout << fruits[2] << endl;
    cout << fruits[3] << endl;

    // To print all the elements of the array, we can use a loo

    for (int i = 0; i < 4; i++){
        cout << fruits[i] << " ";
    }

    return 0;
}