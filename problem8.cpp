/*8.
Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.*/



#include <iostream>
using namespace std;

class Average {
public:
    static void avg(int num1, int num2,int num3) {
        double avg = (num1 + num2 + num3) / 3;
        cout << "Average of the three numbers: " << avg;
    }
};

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    Average::avg(num1, num2, num3);

    return 0;
}
