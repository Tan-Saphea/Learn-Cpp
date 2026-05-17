#include<iostream>
using namespace std;

const int MAX=100;

// struct
struct Student{
    int id;
    string name;
    int age;
};

Student s[MAX];
int n = 0;
// function to display student information
// 1. add student information
void addStudent(){
    int m;

    cout << "Enter number of students : ";
    cin >> m;

    for (int i = 0; i < m; i++){
        cout << "ID :";
        cin >> s[n].id;

        cout << "Name :";
        cin >> s[n].name;

        cout << "Age :";
        cin >> s[n].age;

        n++;

    }
}

// 2. show student information
void showStudent (){
    if (n == 0)
    {
        cout << "No Students \n";
        return;
    }

    cout << "ID\tName\tAge\n";
    for (int i = 0; i < n; i++){
        cout << s[i].id << "\t" << s[i].name << "\t" << s[i].age << "\n";
    }   
}

// 3. search student information by id
void searchStudentById(){
    int id;
    bool found = false;

    cout << "Enter id : ";
    cin >> id;
    
    for(int i = 0; i < n; i++){
        if (s[i].id == id){
            cout << "Found student : " << s[i].name << "\n";
            found = true;
            break;
        }
    }
    if (!found){
        cout << "Student not found \n";
    }
}

//4. delete student information by id
void deleteStudentById(){
    int id;
    bool found = false;

    cout << "Enter ID to delete : ";
    cin >> id;

    for(int i = 0; i < n; i++){
        if(s[i].id == id){
            
            for (int j = i; j < n - 1; j++){
                s[j] = s[j + 1];
            }
            n--;
            found = true;
            cout << "Student deleted \n";
            break;
        }
    }
    if (!found){
        cout << "Student not found \n";
    }
}

// main menu
int main(){
    int choice;

    do {
        cout << "1. Add Student \n";
        cout << "2. Show Students \n";
        cout << "3. Search Student by ID \n";
        cout << "4. Delete Student by ID \n";
        cout << "5. Exit \n";
        cout << "Enter your choice : ";
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
                cout << "Invalid choice \n";
        }
    } while (choice != 5);
    return 0;
}