#include <iostream>

using namespace std;

int main()
{
    int height=0;

    cout << "Enter height: ";
    cin >> height;
    cout << endl;

    for(int i=0; i<= height; i++)
    {
        int starCount = (i*2)-1;
        int spaceCount = height - i + 1;
        for(int j=0; j<spaceCount; j++)
            cout << " ";
        for(int j=0; j<starCount; j++)
            cout << "*";
        cout << endl;
    }

    for(int i=0; i<3; i++)
    {
        for (int j=0; j<height; j++)
            cout << " ";
        cout << "*" << endl;
    }
    return 0;
}
