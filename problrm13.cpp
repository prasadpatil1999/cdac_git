
/*Write a program to print the roll number and average marks of 8 students in three subjects (each
out of 100). The marks are entered by the user and the roll numbers are automatically assigned.*/

#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;
    int marks1, marks2, marks3;

public:
    // Constructor to initialize roll number
    Student(int roll) {
        rollNumber = roll;
    }

    // Function to input marks
    void inputMarks() {
        cout << "Enter marks for student with roll number " << rollNumber << ":" << endl;
        cout << "Subject 1: ";
        cin >> marks1;
        cout << "Subject 2: ";
        cin >> marks2;
        cout << "Subject 3: ";
        cin >> marks3;
    }

    // Function to display average marks
    void displayAverage() {
        double average = (marks1 + marks2 + marks3) / 3.0; // Ensure division is floating point
        cout << "Roll Number: " << rollNumber << "\tAverage Marks: " << average << endl;
    }
};

int main() {
    const int numStudents = 8; // Number of students
    Student students[numStudents]; // Array of Student objects with size 8

    // Initialize each student with corresponding roll number
    for (int i = 0; i < numStudents; ++i) {
        students[i] = Student(i + 1);
    }

    // Input marks for each student
    for (int i = 0; i < numStudents; ++i) {
        students[i].inputMarks();
    }

    // Display student information
    cout << "\nStudent Information:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayAverage();
    }

    return 0;
}


