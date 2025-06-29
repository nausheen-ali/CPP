//read and store lines of a file in a vector

#include <iostream>
#include <fstream>
#include <vector>

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
        cout << "File failed to open" << endl;
        return 1;
    }

    vector<string> contents;
    string line;

    while(!file.eof())
    {
        getline(file,line);
        contents.push_back(line);
    }

    file.close();

    for(auto i : contents)
        cout << i << endl;

    return 0;
}
