// read and store lines of a file in array

#include <iostream>
#include <fstream>

#define MAX_LINES 100

using namespace std;

int main()
{
    string filename;
    ifstream file;
    string array[MAX_LINES];
    int lines=0;

    cout << "File: ";
    cin >> filename;

    file.open(filename);

    if(file.fail())
    {
        cout << "File failed to open." << endl;
        return 1;
    }

    while(!file.eof())
    {
        getline(file,array[lines]);
        lines++;

        if(lines==MAX_LINES)
        {
            cout << "Maximum storage reached" << endl;
            break;
        }
    }

    file.close();

    for (int i=0; i<lines; i++)
        cout << array[i] << endl;

    return 0;
}
