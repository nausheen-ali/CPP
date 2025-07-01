#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));

    int roll=0;
    roll=(rand()%6)+1;
    cout << "Dice: " << roll << endl;
    return 0;
}
