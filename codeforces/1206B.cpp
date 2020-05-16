#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  int n, i, j=0, cost = 0, product=1;

  cin >> n;

  vector <int> arr(n);

  for (i=0 ; i<n ;++i)
  cin >> arr.at(i);


  for (i=0 ;i<n ; ++i)
  {
    while (arr.at(i) != 1 || arr.at(i) != -1)
    {
      if (arr.at(i) < -1)
      {
        ++arr.at(i);
        ++cost;
      }
      else if (arr.at(i) > 1)
      {
        --arr.at(i);
        ++cost;
      }
      else if (arr.at(i) == 0)
      {
        ++arr.at(i);
        ++j;
      }
    }
  }
  for (i=0 ; i<n ;++i)
  product *= arr.at(i);

  if (j == 0 && product == -12)
  cost += 2;
  else
  cost += j;
cout << cost << endl;
return 0;
}
