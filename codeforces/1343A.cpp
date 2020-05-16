#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  int i, t, n;
  cin >> t;
  for (i=0 ; i<t ; ++i)
  {
    int sum = 3, i=2;
    cin >> n;
    while (n%sum != 0)
    {
      sum += pow (2, i);
      ++i;
    }
    cout << n / sum << endl;
  }
  return 0;
}
