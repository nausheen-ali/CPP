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
    double min=0;
    bool firstNumber=true;

    while(file >> number)
    {
        if(firstNumber)
        {
            min=number;
            firstNumber=false;
        }
        else if(number < min)
        {
            min=number;
        }
    }

    if(firstNumber)
    {
        cout << "No numbers read from file" << endl;
    }
    else
    {
        cout << "Smallest number in file: " << min << endl;
    }

    file.close();
    return 0;
}

