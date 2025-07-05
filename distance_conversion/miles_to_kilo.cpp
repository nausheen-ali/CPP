#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double miles;

    cout << "Enter distance in miles: ";
    cin >> miles;

    double kilo = miles * 1.60934;

    cout << "Distance in kilometers: " << fixed << setprecision(2) << kilo << endl;

    return 0;
}
