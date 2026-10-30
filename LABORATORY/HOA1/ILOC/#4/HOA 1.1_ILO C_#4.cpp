#include <iostream>
#include <cmath>

class Triangle {
    private:
    double totalAngle, angleA, angleB, angleC;
    double sideA, sideB, sideC;
    public:
    Triangle (double A, double B, double C, double a, double b, double c);
    void setAngles (double A, double B, double C);
    bool validateTriangle();
    double computeArea();
    double computePerimeter();
    void validateType();
};

int main() {
    Triangle set1 (50, 60, 70, 15, 35, 55);
    if (set1. validateTriangle()) {
        std::cout << "The shape is a valid Triangle" << std::endl;
        std::cout << "The area is: " << set1.computeArea() << std::endl;
        std::cout << "The perimeter is: " << set1.computePerimeter() << std::endl;

        set1.validateType();
    } else {
        std::cout << "The shape is NOT a valid Triangle" << std::endl;
    }
    return 0;
}

Triangle::Triangle (double A, double B, double C, double a, double b, double c) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;

    sideA = a;
    sideB = b;
    sideC = c;
}

void Triangle::setAngles (double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

bool Triangle::validateTriangle() {
    return (totalAngle <= 180);
}

double Triangle::computeArea() {
    double side = (sideA + sideB + sideC) / 2;
    return sqrt((side - sideA) * (side - sideB) * (side - sideC));
}

double Triangle::computePerimeter() {
    return sideA + sideB + sideC;
}

void Triangle::validateType() {
    if (angleA < 90 && angleB < 90 && angleC < 90) {
        std::cout << "The angle is an ACUTE angle" << std::endl;
    }
    else if (angleA == 90 || angleB == 90 || angleC == 90) {
        std::cout << "The angle is a RIGHT angle" << std::endl;
    }
    else if (angleA > 90 || angleB > 90 || angleC == 90) {
        std::cout << "The angle is an OBTUSE angle" << std::endl;
    }
    else {
        std::cout << "Other angle of not an angle" << std::endl;
    }
}
