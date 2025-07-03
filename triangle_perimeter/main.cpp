#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double side1, side2, side3;

    cout << "Enter side 1 length: ";
    cin >> side1;
    cout << "Enter side 2 length: ";
    cin >> side2;
    cout << "Enter side 3 length: ";
    cin >> side3;

    double perimeter = side1+side2+side3;
    cout << "Perimeter is ";
    cout << fixed << setprecision(2) << perimeter << endl;

    return 0;
}
