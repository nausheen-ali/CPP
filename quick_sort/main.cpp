#include <iostream>
#include <utility>
#include <cstdlib>
#include <ctime>

using namespace std;

void quicksort(int a[], int length);
void quicksort_recursion (int a[], int low, int high);
int partition (int a[], int low, int high);

int main()
{
    int length;

    cout << "Enter number of elements: ";
    cin >> length;

    int a[length];

    cout << "Enter " << length << " elements: ";
    for(int i=0; i<length; i++)
        cin >> a[i];

    quicksort(a,length);

    cout << "Sorted array:" << endl;
    for(int i=0; i<length; i++)
        cout << a[i] << " ";


    return 0;
}

void quicksort(int a[], int length)
{
    quicksort_recursion(a,0,length-1);
}

void quicksort_recursion(int a[], int low, int high)
{
    if(low<high)
    {
        int pivot_index = partition(a,low,high);

        quicksort_recursion(a, low, pivot_index-1);
        quicksort_recursion(a, pivot_index+1, high);
    }
}

int partition(int a[], int low, int high)
{
   int pivot_value = a[high];
   int i=low;

   for(int j=low; j<high; j++)
   {
       if(a[j] <= pivot_value)
       {
           swap(a[i], a[j]);
           i++;
       }
   }

   swap(a[i], a[high]);

   return i;
}
