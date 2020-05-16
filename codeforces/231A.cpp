#include <iostream>
using namespace std;

int main ()
{
  int n,i,p,v,t;
  cin >> n;
  int numOfQues=0;
  for (i=0 ; i<n ;++i)
  {
    cin >> p >> v >> t;
    if (p+v+t >=2)
    ++numOfQues;
  }
  cout << numOfQues;

  return 0;
}
