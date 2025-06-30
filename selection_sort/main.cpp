#include <iostream>

using namespace std;

void selection_sort(int a[], int length)
{
    for(int i=0; i<(length-1); i++)
    {
        int min_pos=i;
        for(int j=i+1; j<length; j++)
        {
            if(a[j] < a[min_pos])
            {
                min_pos=j;
            }
        }
        if(min_pos != i)
        {
            int temp = a[i];
            a[i]=a[min_pos];
            a[min_pos]=temp;
        }
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

    selection_sort(a,length);
    cout << "Sorted array" << endl;
    for(int i=0; i<length; i++)
    {
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    return 0;
}

