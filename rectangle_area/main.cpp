#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double length, width, area;

    cout << "Length: ";
    cin >> length;

    cout << "Width: ";
    cin >> width;

    area = length * width;

    cout << "Area: ";
    cout << fixed << setprecision(2) << area << endl;

    return 0;
}
