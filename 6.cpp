#include <iostream>
using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function to calculate area
    virtual float calculateArea() = 0;
};

// Rectangle class derived from Shape
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Implementation of calculateArea() for Rectangle
    float calculateArea() {
        return length * width;
    }
};

// Triangle class derived from Shape
class Triangle : public Shape {
private:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    // Implementation of calculateArea() for Triangle
    float calculateArea() {
        return 0.5 * base * height;
    }
};

int main() {
    // Create objects of Rectangle and Triangle
    Rectangle rectangle(5, 3);
    Triangle triangle(4, 6);

    // Calculate and display the areas
    cout << "Area of Rectangle: " << rectangle.calculateArea() << endl;
    cout << "Area of Triangle: " << triangle.calculateArea() << endl;

    return 0;
}