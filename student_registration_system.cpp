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

// Function to display all registered students
void displayStudents(const vector<Student>& students) {
    if (students.empty()) {
        cout << "No students registered." << endl;
    } else {
        cout << "Registered students:" << endl;
        for (const auto& student : students) {
            cout << "Name: " << student.name << ", Age: " << student.age << ", Course: " << student.course << endl;
        }
    }
}

// Function to search for a student by name
void searchStudent(const vector<Student>& students) {
    string searchName;
    cout << "Enter student name to search: ";
    cin >> searchName;
    
    auto it = find_if(students.begin(), students.end(), [&searchName](const Student& student) {
        return student.name == searchName;
    });
    
    if (it != students.end()) {
        cout << "Student found!" << endl;
        cout << "Name: " << it->name << ", Age: " << it->age << ", Course: " << it->course << endl;
    } else {
        cout << "Student not found." << endl;
    }
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
            case 2:
                displayStudents(students);
                break;
            case 3:
                searchStudent(students);
                break;
            
        }
        
        
    } while (choice != 4);
    
    return 0;
}
