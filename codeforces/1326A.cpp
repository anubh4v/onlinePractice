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
  return 0;
}

void find ()
{
  int n;
  cin >> n;

  if (n==1){
  cout << -1 << endl;
  return;
}
  cout << 2;

  for (int i=0; i<n-1; ++i)
  cout << 3;
  cout << endl;
  return;

}
