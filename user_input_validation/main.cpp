//checking user input validation using a do-while loop
#include <iostream>

using namespace std;

int main()
{
    int month;
    do
    {
        cout << "Month (1-12): ";
        cin >> month;

        if (month<=0 || month>=13)
        {
            cout << "Invalid month entered!" << endl;
            cout << "Month must be between 1-12" << endl;
        }
    }
    while (month<=0 || month>=13);

    cout << "Month entered: " << month << endl;
    return 0;
}
