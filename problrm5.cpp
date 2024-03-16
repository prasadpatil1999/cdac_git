/*5.
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.*/



#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle(double len, double brd) {
        length = len;
        breadth = brd;
    }

    double Area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect1(4, 5);
    Rectangle rect2(5, 8);

    cout << "Area of Rectangle 1: " << rect1.Area();
    cout << "Area of Rectangle 2: " << rect2.Area();

    return 0;
}
