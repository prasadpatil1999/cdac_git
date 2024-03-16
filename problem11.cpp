/*Write a program that would print the information (name, year of joining, salary, address) of three
employees by creating a class named 'Employee'. The output should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat*/



#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int yearOfJoining;
    string address;

public:
    Employee(string n, int year, string addr) {
        name = n;
        yearOfJoining = year;
        address = addr;
    }

    void displayInfo() {
        cout << name << "\t" << yearOfJoining << "\t" << address << endl;
    }
};

int main() {

    Employee emp1("prasad", 1999, "jalgaon");
    Employee emp2("harshal", 2000, "Dhule");
    Employee emp3("kaushal", 1999, "Jamner");

    
    cout << "Name\tYear of joining\tAddress";
    emp1.displayInfo();
    emp2.displayInfo();
    emp3.displayInfo();

    return 0;
}
