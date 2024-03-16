


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
 long long int phone_number;
    string address;

public:
    Student(string n, int roll, long long int phone, string addr) {
        name = n;
        roll_no = roll;
        phone_number = phone;
        address = addr;
    }

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Phone Number: " << phone_number << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Student sam("Sam", 36, 8408929387, "jalgaon"); 
    Student john("John", 102, 956656655, "nashik");

    cout << "Details of Sam:";
    sam.printDetails();

    cout << "\nDetails of John:";
    john.printDetails();

    return 0;
}

