//count number of lines in a file

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

    string line;
    int lines=0;

    while(!file.eof())
    {
        getline(file,line);
        cout << line << endl;
        lines++;
    }

    file.close();

    cout << "Total lines: " << lines << endl;
    return 0;
}
