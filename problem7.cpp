/*7.
Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.*/


#include <iostream>
using namespace std;

class Area {
private:
    double length;
    double breadth;

public:
    Area(double len, double brd) {
        length = len;
        breadth = brd;
    }

    double returnArea() {
        return length * breadth;
    }
};

int main() {
    double len, brd;
    cout << "Enter length of the rectangle: ";
    cin >> len;
    cout << "Enter breadth of the rectangle: ";
    cin >> brd;
    Area rect(len, brd);

    cout << "Area of the rectangle: " << rect.returnArea();

    return 0;
}
