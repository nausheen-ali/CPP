#include <iostream>
#include <cstdlib>
#include <ctime>

#define HEADS 0
#define TAILS 1

using namespace std;

int flipCoin()
{
    if(rand()%2==0) return HEADS;
    else return TAILS;
}
int main()
{
    srand ((unsigned int) time(NULL));

    if(flipCoin()==HEADS) cout << "Heads" << endl;
    else cout << "Tails" << endl;

    return 0;
}
