#include<iostream>
using namespace std;

int main(){
    // i -> ជាជួរដេក (Row)
    for(int i = 10; i >= 1; i--){
        // J -> ជួរឈរ​ ​(column)
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;

    }

    return 0;
}