#include<iostream>
using namespace std;
int main(){
    int score;

    cout << "Enter your score :"; cin >> score;

    if (score >= 90)
    {
        cout <<"A"<< endl;
    }else if (score >=80){
        cout << "B" << endl;
    }else if (score >=70){
        cout << "C" << endl;
    }else if (score >=60){
        cout << "D" << endl;
    }else if (score >=50){
        cout << "E" << endl;
    }else{ 
        cout << "F" << endl;

    return 0;
    }
}