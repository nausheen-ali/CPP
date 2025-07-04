//convert a temperature from celsius to fahrenheit
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double c;
    cout << "Enter Celsius Temperature: ";
    cin >> c;

    double f = (9.0/5.0) * c + 32;

    cout << fixed << setprecision(2) << f << " Farhenheit" << endl;

    return 0;
}
