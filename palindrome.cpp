#include <iostream>

using namespace std;

bool isPalindrome(string text)
{
    for(int i=0; i<text.length()/2; i++)
        if(text[i] != text[text.length()-i-1])
            return false;
    return true;
}

int main()
{
    string text;
    cout << "Enter string to check palindrome: ";
    cin >> text;

    if(isPalindrome(text))
        cout << text << " is a Palindrome" << endl;
    else
        cout << text << " is NOT a Palindrome" << endl;
    return 0;
}
