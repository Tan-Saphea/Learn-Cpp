#include<iostream>
using namespace std;

int main(){
    int num[5] = {2 ,4 ,6 ,8 ,10};
    

    cout << num[0] << endl;
    cout << num[3] << endl;

    // To print all the elements of the array, we can use a loop
    for (int i = 0; i < 5; i++){
        cout << num[i] << " ";
    }
    return 0;
}