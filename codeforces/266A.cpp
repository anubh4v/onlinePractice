#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int n, i ,count = 0;

  cin >> n;
  string str;
  cin >> str;

  for (i=0 ; i<n-1 ; ++i)
  {
    if (str.at(i) == str.at(i+1))
    count ++;
  }
  cout << count;
  return 0;
}
