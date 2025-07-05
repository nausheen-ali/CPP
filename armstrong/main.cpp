#include <iostream>
#include <cmath>

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

bool isArmstrong(int num)
{
    int total = count_digits(num);
    int sum=0;
    int temp=num;

    while(temp!=0)
    {
        int digit = temp%10;
        temp = temp/10;
        sum+= pow(digit, total);
    }

    return sum==num;
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(isArmstrong(num))
        cout << num << " is an armstrong number." << endl;
    else
        cout << num << " is NOT an armstrong number." << endl;
}
