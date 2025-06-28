#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double height = 0;
    double base = 0;
    double area = 0;

    cout << "Height: ";
    cin >> height;

    cout << "Base: ";
    cin >> base;

    area = 0.5*base*height;

    cout << "Triangle Area: ";
    cout << fixed << setprecision(2) << area << endl;
}
