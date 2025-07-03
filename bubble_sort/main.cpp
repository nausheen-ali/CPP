#include <iostream>

using namespace std;

void bubble_sort(int a[], int length)
{
    bool swapped;
    int i=0;

    do
    {
        swapped=false;
        for(int j=0; j<length-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=true;
            }
        }
        i++;
    }while(swapped);
}

int main()
{
    int length;
    cout << "Enter number of elements: ";
    cin >> length;

    int a[length];
    cout << "Enter " << length << " elements";
    for(int i=0; i<length; i++)
        cin >> a[i];

    bubble_sort(a,length);
    cout << "Sorted array: " << endl;
    for(int i=0; i<length; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}

