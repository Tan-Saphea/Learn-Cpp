#include<iostream>
using namespace std;

class Student{
    // data members
    private:
        int id;
        string name;

    // member functions
    public:
        void setId(int id){
            this->id = id;
        }
        int getId(){
            return id;
        }

        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
};

int main()
{
    cout<<"==== Encapsulation in C++ ===="<<endl;
    
    Student s;
    s.setId(2);
    cout << s.getId() << endl;

    s.setName("Tan Saphea");
    cout << s.getName() << endl;
    
    return 0;
}