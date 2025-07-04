//convert a temperature from farhenheit to celsius
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double f;
    cout << "Enter Farhenheit Temperature: ";
    cin >> f;

    double c = (f - 32) * (5.0/9.0);

    cout << fixed << setprecision(2) << c << " Celsius" << endl;

    return 0;
}

