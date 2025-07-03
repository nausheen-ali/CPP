#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

int is_vowel(char c);
int count_vowels(string text);

int main()
{
    string text;
    cout << "Enter text: ";
    getline(cin,text);

    int vowel_count = count_vowels(text);

    cout << "Total Vowels: " << vowel_count << endl;

    return 0;
}

int count_vowels(string text)
{
    int vowel_count=0;
    for(int i=0; i<text.length(); i++)
    {
        char c = tolower(text[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            vowel_count++;
    }
    return vowel_count;
}

/*
int is_vowel(char character)
{
    char c = tolower(character);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int count_vowels(string text)
{
    return count_if(text.begin(), text.end(), is_vowel);
}
*/
