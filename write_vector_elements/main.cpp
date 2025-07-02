//write vector elements (int & string) in a file and display the contents.

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    vector<int> test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);

    vector<string> test1;
    test1.push_back("String 1");
    test1.push_back("String 2");
    test1.push_back("String 3");

    string filename;

    cout << "File: ";
    cin >> filename;

    ofstream file;
    file.open(filename);
    if(file.fail())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    for (auto element : test)
    {
        file << element << endl;
    }

    for (auto element : test1)
    {
        file << element << endl;
    }

    file.close();

    ifstream read_file(filename);
    if(read_file.fail())
    {
        cout << "Error reading file." << endl;
        return 1;
    }

    cout << "Contents of: " << filename << endl;
    string line;
    while(getline(read_file, line))
    {
        cout << line << endl;
    }
    read_file.close();

    return 0;
}
