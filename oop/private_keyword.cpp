#include <iostream>
using namespace std;

class Student{
    private:
    string name;
    float score;

    public:
    void setData(){
        cout << "Enter name : ";
        cin >> name;

        cout << "Enter score : ";
        cin >> score;
    }
    void showData(){
        cout << "Name : " << name << endl;
        cout << "Score : " << score << endl;
    }
};

int main(){
    Student s;

    s.setData();
    s.showData();


    return 0;
}
