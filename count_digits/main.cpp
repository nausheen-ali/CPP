//count number of digits in an integer

#include <iostream>
#include <iomanip>

using namespace std;

int count_digits(int num)
{
    if (num==0)
        return 1;

    int digits=0;
    while(num!=0)
    {
        num=num/10;
        digits++;
    }

    return digits;
}

int main()
{
    int number;
    cout << "Enter integer: ";
    cin >> number;

    cout << "Total digits: " << count_digits(number) << endl;

    return 0;
}
