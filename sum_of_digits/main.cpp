//sum of digits of a number using recursion
#include <iostream>

using namespace std;

int sum_digit(int num)
{
    if(num==0) return 0;
    return (num%10)+sum_digit(num/10);
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "Sum of digits is " << sum_digit(number) << endl;

    return 0;
}
