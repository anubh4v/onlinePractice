#include <iostream>

using namespace std;
void find ();
int main ()
{
  int t;
  cin >> t;

  while (t--)
  {
    find();
  }
}
void find ()
{
  int n, k;
  cin >> n >>k;
  if (n%2 == k%2 && n >= (long long int)k*k)
  cout << "YES" << endl;
  else
  cout << "NO" << endl;
}
