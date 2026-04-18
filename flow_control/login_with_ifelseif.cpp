#include <iostream>
using namespace std;

int main(){
    string username;
    string password;

    cout << "======== Sign In ========" << endl;
    cout << "sing in with your username and password" << endl;

    cout << "Enter your username : ";
    cin >> username;

    cout << "Enter your password : ";
    cin >> password;

    // check condition
    if (username == "phea" && password == "p123")
    {
        cout << "Login successfully" << endl;
    }else if (username != "phea" && password != "p123")
    {
        cout << "Login failed" << endl;
    }else if (username == "phea" && password != "p123")
    {
        cout << "Password is incorrect" << endl;
    }else{
        cout << "Username is incorrect" << endl;
    }
    


    return 0;
}