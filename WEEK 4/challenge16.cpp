#include <iostream>
using namespace std;
 main(){
    
    string shape;
    double side, length, width, radius, base, height, area;

    cout << "Enter shape (Square, Rectangle, Circle, Triangle): ";
    cin >> shape;

    if (shape == "Square")
    {
        cout << "Enter side: ";
        cin >> side;

        area = side * side;
        cout << "Area = " << area;
    }

    else if (shape == "Rectangle")
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        area = length * width;
        cout << "Area = " << area;
    }

    else if (shape == "Circle")
    {
        cout << "Enter radius: ";
        cin >> radius;

        area = 3.14159 * radius * radius;
        cout << "Area = " << area;
    }

    else if (shape == "Triangle")
    {
        cout << "Enter base: ";
        cin >> base;

        cout << "Enter height: ";
        cin >> height;

        area = 0.5 * base * height;
        cout << "Area = " << area;
    }
}