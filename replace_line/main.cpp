#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string filename;
    string text;
    int line_number;

    cout << "File: ";
    getline(cin,filename);

    cout << "Text: ";
    getline(cin,text);

    cout << "Line: ";
    cin >> line_number;

    fstream read_file;
    read_file.open(filename);

    if(read_file.fail())
    {
        cout << "Error opening file." << endl;
        return 1;
    }
    vector<string> lines;
    string line;

    while(getline(read_file, line))
        lines.push_back(line);
    read_file.close();

    if(line_number > lines.size())
    {
        cout << "Line" << line_number;
        cout << " not in file." << endl;

        cout << "File has " << lines.size();
        cout << " lines." << endl;

        return 1;
    }

    ofstream write_file;
    write_file.open(filename);
    if (write_file.fail())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    line_number--;
    for(int i=0; i<lines.size();i++)
    {
        if (i!=line_number)
            write_file << lines[i] << endl;
        else
            write_file << text << endl;
    }

    write_file.close();

    cout << "Updated File Contents: " << endl;
    ifstream updated_file(filename);
    while(getline(updated_file,line))
    {
        cout << line << endl;
    }
    updated_file.close();
    return 0;
}
