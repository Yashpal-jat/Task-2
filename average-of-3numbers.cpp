#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    double average = (num1 + num2 + num3) / 3;

    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}
