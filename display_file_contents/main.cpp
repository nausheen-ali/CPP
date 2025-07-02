#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename;
    cout << "File: ";
    cin >> filename;

    ifstream file;
    file.open(filename);

    if(file.fail())
    {
        cout << "Error opening file." << endl;
        return 1;
    }

    /*char c;
    while(file.get(c)) cout << c;
    file.close();*/

    cout << file.rdbuf();

    return 0;
}
