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
  vector<int> data;

  data.push_back(3);
  data.push_back(8);
  data.push_back(7);
  data.push_back(9);

  auto it = find_if(data.begin(), data.end(), isEven);


  if (it == data.end())
  {
    cout << "No even value found in vector." << endl;
  }
  else
  {
    cout << "First even value in vector: " << *it << endl;
  }

  return 0;
}

