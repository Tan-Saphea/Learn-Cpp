#include<iostream>
using namespace std;

class Book{
    public:
        string title;
        float price;
    
    // constructor with parameters
    Book(string t, float p){
        title = t;
        price = p;
    }

    // member function
    void showInfo(){
        cout << "Title : " << title << endl;
        cout << "Price : " << price << "$"<< endl;
    }
};

int main(){
    cout<<"==== CONSTRUCTOR HAVE PARAMETER ===="<<endl;
    
    // create an object of the Book class
    Book b("Atomic Habits", 20.99);
    b.showInfo();


    return 0;
}