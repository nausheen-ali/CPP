#include <iostream>

using namespace std;

int main()
{
    string text;
    char character;

    cout << "String: ";
    getline(cin,text);

    cout << "Character: ";
    cin >> character;

    int occurrences = 0;

    //for (int i=0; i<text.length(); i++)
    //  if(text[i] == character) occurrences++;
    for(char c: text)
        if(c == character) occurrences++;

    cout << occurrences << " occurrences" << endl;
}
