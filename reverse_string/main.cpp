#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    //string approach
    string text1 = "Hello World";
    reverse (text1.begin(), text1.end());
    cout << text1 << endl;

    //C-style char[] approach
    char text2[] = "Welcome to C++ Programming";
    reverse(text2, text2+strlen(text2));
    cout << text2 << endl;

    return 0;
}
