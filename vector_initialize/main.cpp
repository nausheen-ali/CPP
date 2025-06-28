#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data;

    int i=0;
    int value=0;

    cout << "Enter -1 to complete input" << endl;

    while(true)
    {
        cout << "Element" << i << ": ";
        cin >> value;

        if (value == -1) break;
        data.push_back(value);
        i++;
    }
    for (auto elem : data)
        cout << elem << " ";
    cout << endl;

    return 0;
}
