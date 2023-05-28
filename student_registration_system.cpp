#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to hold student information
struct Student {
    string name;
    int age;
    string course;
};

// Function to add a new student
void addStudent(vector<Student>& students) {
    Student newStudent;
    cout << "Enter student name: ";
    cin >> newStudent.name;
    cout << "Enter student age: ";
    cin >> newStudent.age;
    cout << "Enter student course: ";
    cin >> newStudent.course;
    
    students.push_back(newStudent);
    cout << "Student added successfully!" << endl;
}

int main() {
    vector<Student> students;
    int choice;
    
    do {
        cout << "----- Student Registration System -----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addStudent(students);
                break;
            
        }
        
        
    } while (choice != 4);
    
    return 0;
}
