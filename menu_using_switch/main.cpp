#include <iostream>

using namespace std;

int main()
{
    double balance=0;
    double amount=0;
    int choice=0;
    bool quit=false;

    do
    {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Print balance" << endl;
        cout << "4. Print balance and quit" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "Enter amount: ";
            cin >> amount;
            balance +=amount;
            break;

        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            balance-=amount;
            break;

        case 3:
            cout << "Balance: " << balance << endl;
            break;

        case 4:
            cout << "Balance: " << balance << endl;

        case 5:
            cout << "Goodbye!" << endl;
            quit=true;
            break;

        default:
            cout << "Invalid choice entered" << endl;
        }
    }while(!quit);

    return 0;
}
