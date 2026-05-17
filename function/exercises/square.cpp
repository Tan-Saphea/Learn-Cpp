#include<iostream>
using namespace std;

// Function សម្រាប់រកបរិមាណការ៉េ
int square(int side){
    return 4 * side;
}

int main(){
    int side;

    cout << "Enter side :";
    cin >> side;

    int result = square(side);

    cout << "The square is : " << result << endl;


    return 0;
}