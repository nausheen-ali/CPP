//calculating sum and average of the numbers in a file

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
        cout << "File failed to open." << endl;
        return 1;
    }

    double number=0;
    double sum=0;
    double total=0;
    while(file >> number)
    {
        sum+=number;
        total++;
    }
    cout << "Sum: " << sum << endl;

    double average = sum/total;
    cout << "Average: " << average << endl;

    file.close();

    return 0;
}
