#include <iostream>

using namespace std;

bool isEven(int num);

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    if(isEven(num))
        cout << num << " is Even number" << endl;
    else
        cout << num << " is Odd number" << endl;
    return 0;
}

bool isEven(int num)
{
    return (num%2 == 0);
}
