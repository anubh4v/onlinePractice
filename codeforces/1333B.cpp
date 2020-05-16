#include <iostream>
#include <vector>

using namespace std;

int main ()
{
int j, t, n;
  cin >> t;
while (t--)
{
  cin >> n;
  vector <int> arr(n), brr(n);
  for (j=0 ; j<n ; ++j)
  cin >> arr.at(j);

  for (j=0 ; j<n ; ++j)
  cin >> brr.at(j);

  if (arr.at(0) != brr.at (0))
  {
   cout << "NO" << endl;
   continue;
  }

  j=n;

  while (--j)
  {
    bool success= false;
    if (arr.at(j) < brr.at(j))
    {
    for (int i=0; i<j; ++i)
    if (arr.at(i)==1)
    success = true;
  }

    else if (arr.at(j) > brr.at(j))
    {
    for (int i=0 ; i<j; ++i)
    if (arr.at(i) == -1)
    success = true;
  }
    else if (arr.at (j) == brr.at (j))
    success = true;

    if (success == false)
    break;

  }
  if (!j)
  cout << "YES"<< endl;
  else
  cout << "NO" << endl;

}
return 0;
}
