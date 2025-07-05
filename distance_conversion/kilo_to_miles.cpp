#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double kilo;

    cout << "Enter distance in kilometers: ";
    cin >> kilo;

    double miles = kilo / 1.60934;

    cout << "Distance in miles: " << fixed << setprecision(2) << miles << endl;

    return 0;
}

