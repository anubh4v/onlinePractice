#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int i, n, x=0;
  string str;

  cin >> n;

  for (i=0 ; i<n ; ++i)
  {
    cin >> str;
    if (str.at(1) == '+')
    ++x;
    else
    --x;
  }
  cout << x;
  return 0;
}
