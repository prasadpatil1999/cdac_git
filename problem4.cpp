/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters. */

#include <iostream>
#include <cmath> 

using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    
    Triangle(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

  
    double calculateArea() {
        double s = (side1 + side2 + side3) / 2; 
        return sqrt(s * (s - side1) * (s - side2) * (s - side3)); 
    }

   
    double calculatePerimeter() {
        return side1 + side2 + side3;
    }
};

int main() {
    
    Triangle triangle(3, 4, 5);
    cout << "Area of the triangle: " << triangle.calculateArea() << " square units";
    cout << "Perimeter of the triangle: " << triangle.calculatePerimeter() << " units";

    return 0;
}
