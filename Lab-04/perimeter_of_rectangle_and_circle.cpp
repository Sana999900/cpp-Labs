#include <iostream>
using namespace std;

class Shape{
    float radius, length, width;

public:
    // Constructor
    Shape(float r, float l, float w){
        radius = r;
        length = l;
        width = w;
    }

    float circlePerimeter(){
        return 2 * 3.14 * radius;
    }

    float rectanglePerimeter(){
        return 2 * (length + width);
    }

    // Destructor
    ~Shape(){
        cout << "Destructor called." << endl;
    }
};

int main(){
    float r, l, w;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter length of rectangle: ";
    cin >> l;

    cout << "Enter width of rectangle: ";
    cin >> w;

    Shape s(r, l, w);

    cout << "Perimeter of circle = " << s.circlePerimeter() << endl;
    cout << "Perimeter of rectangle = " << s.rectanglePerimeter() << endl;

    return 0;
}
