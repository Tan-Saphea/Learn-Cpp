#include<iostream>
using namespace std;

const int MAX = 100;

// struct
struct Student{
    int id;
    string name;
    int age;
};

Student s[MAX];
int n = 0;

// 1. add student
void addStudent(){
    int m;
    cout << "Enter nunber of students : "; 
    cin >> m;

    for(int i = 0; i < m; i++){
        cout << "\nStudent " << n + 1 << endl;

        cout << "ID :";
        cin >> s[n].id;

        cout << "Name :";
        cin >> s[n].name;

        cout << "Age :";
        cin >> s[n].age;

        n++;
    }
}

// 2. show student
void showStudent(){
    if (n == 0){
        cout << "No student to show!!"<< endl;
        return;
    }

    cout << "\nID\tName\tAge" << endl;
    for(int i = 0; i < n; i++){
        cout << "" << s[i].id << "\t" << s[i].name << "\t" << s[i].age << endl;
    }
}

// 3. search student
void searchStudentById(){
    int id;
    bool found = false;

    cout << "Enter student ID to search : ";
    cin >> id;

    cout << "\nID\tName\tAge" << endl;
    for(int i = 0; i< n; i++){
        if(s[i].id == id){
            cout << s[i].id << "\t"<< s[i].name << "\t" << s[i].age << endl;
            found = true;
            break;
        }
    }
    if (!found){
        cout << "Student not found!! \n";
    }
}

// 4. delete student
void deleteStudentById(){
    int id;
    bool found = false;

    cout << "Enter student ID to delete : ";
    cin >> id;

    for(int i = 0; i < n; i++){
        if(s[i].id == id){
            for(int j = i; j < n -1; j++){
                s[j] = s[j + 1];
            }
            n--;
            cout << "Student deleted successfully!! \n";
            found = true;
            break;
        }
    }
    if (!found){
        cout << "Student not found!! \n";
    }
}

//5. main menu
int main(){
    int choice;

    do{
        cout << "\n======= MENU ========\n";
        cout << "1. Add Student\n";
        cout << "2. Show Student\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Choice : ";
        cin >> choice; 

        switch(choice){
            case 1:
            addStudent();
            break;

            case 2:
            showStudent();
            break;

            case 3:
            searchStudentById();
            break;

            case 4:
            deleteStudentById();
            break;

            case 5:
            cout << "Exiting... \n";
            break;

            default:
            cout << "Invalid choice!! \n";
            break;      
        }
    }while(choice != 5);

return 0;
}