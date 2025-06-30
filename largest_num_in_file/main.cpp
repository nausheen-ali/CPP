#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename;
    ifstream file;

    cout << "File: ";
    cin >> filename;

    file.open(filename);
    if(file.fail())
    {
        cout << "File failed to open." << endl;
        return 1;
    }

    double number=0;
    double max=0;
    bool firstNumber=true;

    while(file >> number)
    {
        if(firstNumber)
        {
            max=number;
            firstNumber=false;
        }
        else if(number > max)
        {
            max=number;
        }
    }

    if(firstNumber)
    {
        cout << "No numbers read from file" << endl;
    }
    else
    {
        cout << "Largest number in file: " << max << endl;
    }

    file.close();
    return 0;
}
