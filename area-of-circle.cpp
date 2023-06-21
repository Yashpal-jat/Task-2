#include <iostream>
using namespace std;

const double PI = 3.14159;

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = PI * radius * radius;
    double perimeter = 2 * PI * radius;

    cout << "Area of the circle: " << area << endl;
    cout << "Perimeter of the circle: " << perimeter << endl;

    return 0;
}


