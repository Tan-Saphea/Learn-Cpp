#include <iostream>
using namespace std;

// Parent
class Person {
protected:
    string name;
};

// Child
class Student : public Person {
public:
    void setName(string n) {
        name = n;   // ✔️ អាចប្រើបាន
    }

    void showName() {
        cout << "Name = " << name << endl;
    }
};

int main() {
    Student s;

    s.setName("Sok");
    s.showName();

    return 0;
}