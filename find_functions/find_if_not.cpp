#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isEven(int n)
{
  return (n % 2) == 0;
}

int main()
{
  vector<int> data = {2,4,6,7,8,10};

  auto it = find_if_not(data.begin(), data.end(), isEven);

  if (it == data.end())
  {
    cout << "No even value found in vector." << endl;
  }
  else
  {
    cout << "1st non-even (odd) value: " << *it << endl;
  }

  return 0;
}
