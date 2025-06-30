#include <iostream>

using namespace std;

void insertion_sort(int a[], int length)
{
    for(int i=1; i<length; i++)
    {
        int key = a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}

int main()
{
    int length;

    cout << "Enter number of elements: ";
    cin >> length;

    int a[length];

    cout << "Enter " << length << " elements:\n";
    for(int i=0; i<length; i++)
        cin >> a[i];

    insertion_sort(a,length);
    cout << "Sorted array" << endl;
    for(int i=0; i<length; i++)
    {
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    return 0;
}
