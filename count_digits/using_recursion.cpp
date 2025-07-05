//count number of digits in an integer using recursion

#include <iostream>
#include <iomanip>

using namespace std;

int count_digits(int num)
{
    if (num/10==0) return 1;
    return 1 + count_digits(num/10);
}

int main()
{
    int number;
    cout << "Enter integer: ";
    cin >> number;

    cout << "Total digits: " << count_digits(number) << endl;

    return 0;
}

