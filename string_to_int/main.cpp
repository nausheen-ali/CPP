//converting string to int
//done in two ways

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    //Approach 1: Use stoi()

    string num1 = "42";
    int n1=stoi(num1);
    cout << n1 << endl;

    //Approach 2: Use a stringstream object

    stringstream convert;
    string num2 = "88";
    convert << num2;

    int n2;
    convert >> n2;
    cout << n2 << endl;

    return 0;
}
