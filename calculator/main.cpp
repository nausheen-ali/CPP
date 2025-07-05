#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int choice;
    double num1, num2, result;
    bool valid = true;

    cout << "---CALCULATOR---" << endl;
    cout << "1. Add(+)" << endl;
    cout << "2. Subtract(-)" << endl;
    cout << "3. Multiply(*)" << endl;
    cout << "4. Divide(/)" << endl;

    do
    {
        cout << "Enter choice: ";
        cin >> choice;

        if(choice<1 || choice >4)
            cout << "Invalid choice. Try again." << endl;

    }while(choice<1 || choice>4);

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(choice)
    {
    case 1:
        result = num1+num2;
        break;
    case 2:
        result = num1-num2;
        break;
    case 3:
        result = num1*num2;
        break;
    case 4:
        if(num2==0)
        {
            cout << "Invalid. Cannot divide by zero." << endl;
            valid = false;
        }
        else
            result = num1/num2;
        break;
    }

    if (valid)
        cout << "Result: " << fixed << setprecision(2) << result << endl;

    return 0;
}
