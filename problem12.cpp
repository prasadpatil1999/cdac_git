#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double salary;
    string dateOfJoining;

public:
    // Function to set employee details
    void setDetails(string empName, double empSalary, string empDate) {
        name = empName;
        salary = empSalary;
        dateOfJoining = empDate;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Date of Joining: " << dateOfJoining << endl;
        cout << endl;
    }
};

int main() {
    Employee employees[10]; 
		int i;
    for (i = 0; i < 3; ++i) {
        cout << "Enter details for Employee " << i + 1 << ":" ;
        string name, date;
        double salary;
        cout << "Name: ";
        getline(cin >> ws, name); 
        cout << "Salary: ";
        cin >> salary;
        cout << "Date of Joining (YYYY-MM-DD): ";
        cin >> date;
        employees[i].setDetails(name, salary, date);
        cout << endl;
    }

    cout << "Employee Details:" << endl;
    for (i = 0; i < 3; ++i) {
        cout << "Employee " << i + 1 << ":" ;
        employees[i].displayDetails();
    }

    return 0;
}
