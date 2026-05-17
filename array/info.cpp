#include <iostream>
#include <iomanip>
using namespace std;

const int MAX = 100;

struct Student {
    int id;
    string name;
    int age;
    string gender;
    float score;
};

Student students[MAX];
int countStudent = 0;

// 1. Add student
void addStudent() {
    int n;
    cout << "How many students do you want to add? ";
    cin >> n;

    if (countStudent + n > MAX) {
        cout << "Cannot add more students. Array is full.\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nEnter information for student " << countStudent + 1 << ":\n";
        cout << "ID: ";
        cin >> students[countStudent].id;
        cin.ignore();

        cout << "Name: ";
        getline(cin, students[countStudent].name);

        cout << "Age: ";
        cin >> students[countStudent].age;
        cin.ignore();

        cout << "Gender: ";
        getline(cin, students[countStudent].gender);

        cout << "Score: ";
        cin >> students[countStudent].score;

        countStudent++;
    }

    cout << "\nStudent added successfully.\n";
}

// 2. Show all students
void showStudents() {
    if (countStudent == 0) {
        cout << "No student data available.\n";
        return;
    }

    cout << "\n================ STUDENT LIST ================\n";
    cout << left << setw(10) << "ID"
         << setw(20) << "Name"
         << setw(10) << "Age"
         << setw(15) << "Gender"
         << setw(10) << "Score" << endl;

    for (int i = 0; i < countStudent; i++) {
        cout << left << setw(10) << students[i].id
             << setw(20) << students[i].name
             << setw(10) << students[i].age
             << setw(15) << students[i].gender
             << setw(10) << students[i].score << endl;
    }
}

// 3. Search student by ID
void searchStudent() {
    int searchId;
    bool found = false;

    cout << "Enter student ID to search: ";
    cin >> searchId;

    for (int i = 0; i < countStudent; i++) {
        if (students[i].id == searchId) {
            cout << "\nStudent found:\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Gender: " << students[i].gender << endl;
            cout << "Score: " << students[i].score << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
}

// 4. Update student by ID
void updateStudent() {
    int updateId;
    bool found = false;

    cout << "Enter student ID to update: ";
    cin >> updateId;
    cin.ignore();

    for (int i = 0; i < countStudent; i++) {
        if (students[i].id == updateId) {
            cout << "\nEnter new information:\n";

            cout << "New Name: ";
            getline(cin, students[i].name);

            cout << "New Age: ";
            cin >> students[i].age;
            cin.ignore();

            cout << "New Gender: ";
            getline(cin, students[i].gender);

            cout << "New Score: ";
            cin >> students[i].score;

            cout << "Student updated successfully.\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
}

// 5. Delete student by ID
void deleteStudent() {
    int deleteId;
    bool found = false;

    cout << "Enter student ID to delete: ";
    cin >> deleteId;

    for (int i = 0; i < countStudent; i++) {
        if (students[i].id == deleteId) {
            for (int j = i; j < countStudent - 1; j++) {
                students[j] = students[j + 1];
            }
            countStudent--;
            cout << "Student deleted successfully.\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }
}

// 6. Find top student
void findTopStudent() {
    if (countStudent == 0) {
        cout << "No student data available.\n";
        return;
    }

    int topIndex = 0;
    for (int i = 1; i < countStudent; i++) {
        if (students[i].score > students[topIndex].score) {
            topIndex = i;
        }
    }

    cout << "\nTop Student:\n";
    cout << "ID: " << students[topIndex].id << endl;
    cout << "Name: " << students[topIndex].name << endl;
    cout << "Age: " << students[topIndex].age << endl;
    cout << "Gender: " << students[topIndex].gender << endl;
    cout << "Score: " << students[topIndex].score << endl;
}

int main() {
    int choice;

    do {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Show All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Update Student by ID\n";
        cout << "5. Delete Student by ID\n";
        cout << "6. Find Top Student\n";
        cout << "7. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                showStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                findTopStudent();
                break;
            case 7:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}