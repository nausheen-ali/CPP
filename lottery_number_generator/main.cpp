#include <iostream>
#include <cstdlib>
#include <ctime>

#define TOTAL 6
#define RANGE_MAX 59

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));

    int number=0;
    int numbers[TOTAL];
    bool unique=false;

    for(int i=0; i<TOTAL; i++)
    {
        do
        {
            number=(rand() % RANGE_MAX)+1;
            unique=true;
            for(int j=0; j<i;j++)
                if(numbers[j]==number) unique=false;
        }while(!unique);
        numbers[i]=number;
        cout << "number " << (i+1) << ": " << number << endl;
    }
    return 0;
}
