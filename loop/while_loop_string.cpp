#include <iostream>
using namespace std;

int main(){
    // While Loop with string
    string name = "Hello";
    int i = 0;

    while(i < name.length()){
        cout << name[i] << endl;
        i++;
    }

    return 0;
}