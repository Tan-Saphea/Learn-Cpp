#include <iostream>
using namespace std;

// Function សម្រាប់រកផ្ទៃក្រឡាចតុកោណកែង
float rectangleArea(float length, float width){
    return length * width;
}

int main(){
    float length, width;

    cout << "Enter Lenght: ";
    cin >> length;

    cout << "Enter Width: ";
    cin >> width;

    float area = rectangleArea(length, width);
    cout << "Area of Rectangle is :" << area << "cm" << endl;
    return 0;
}