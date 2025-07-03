#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double length=0;
    double width=0;
    double perimeter=0;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    perimeter = 2*length + 2*width;
    cout << "Rectangle perimeter is ";
    cout << fixed << setprecision(2) << perimeter << endl;

    return 0;
}
