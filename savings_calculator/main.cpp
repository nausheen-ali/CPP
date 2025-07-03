#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double balance=0;
    double annualContribution=0;
    double rateOfReturn=0;
    int totalYears=0;

    do
    {
        cout << "Initial Deposit: ";
        cin >> balance;
        if(balance < 0)
        {
            cout << "Initial deposit must be >= 0" << endl;
        }
    }while(balance < 0);

    do
    {
        cout << "Annual Contribution: ";
        cin >> annualContribution;
        if(annualContribution < 0)
        {
            cout << "Annual Contribution must be >= 0" << endl;
        }
    }while(annualContribution < 0);

    do
    {
        cout << "Rate of return: ";
        cin >> rateOfReturn;
        if(rateOfReturn <= 0)
        {
            cout << "Rate of Return must be > 0" << endl;
        }
    }while(rateOfReturn <= 0);

    do
    {
        cout << "Years to grow: ";
        cin >> totalYears;
        if(totalYears < 0)
        {
            cout << "Years to grow must be >= 0" << endl;
        }
    }while(totalYears < 0);

    cout << endl;
    cout << setw(10) << "Year";
    cout << setw(18) << "Start Balance";
    cout << setw(16) << "Interest";
    cout << setw(16) << "End Balance";
    cout << endl;

    for(int i=0; i<60; i++) cout << "*";
    cout << endl;

    for(int year=1; year <= totalYears; year++)
    {
        cout << setw(10) << year;
        cout << setw(18) << fixed << setprecision(2) << balance;

        double interest = balance * (rateOfReturn/100);
        balance += interest + annualContribution;

        cout << setw(16) << fixed << setprecision(2) << interest;
        cout << setw(16) << fixed << setprecision(2) << balance;
        cout << endl;
    }
    return 0;
}
