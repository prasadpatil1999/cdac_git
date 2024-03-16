
#include <iostream>
 #include<string>

using namespace std;

class Student {
private:
    char name[50];
    int roll_no;

public:

    Student(char n[], int roll) {
        strcpy(name, n); 
        roll_no = roll;
    }
     string getName() {
        return name;
    }

    int getRollNo() {
	
        return roll_no;
    }
};

int main() {
    Student s1("John", 2);
    cout << "Name: " << s1.getName() ;
    cout << "Roll No: " << s1.getRollNo();

    return 0;
}
