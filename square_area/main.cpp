#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double side;
    cout << "Enter length: " ;
    cin >> side;

    double area=side*side;

    cout << "Square Area: ";
    cout << fixed << setprecision(2) << area << endl;
    return 0;
}
