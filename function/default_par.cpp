#include<iostream>
using namespace std;

void printMessage(string msg = "Hello"){
    cout<<"This is my message : "<<msg<<endl;

}

int main(){
    printMessage();
    printMessage("Welcome to C++ programming");
}

