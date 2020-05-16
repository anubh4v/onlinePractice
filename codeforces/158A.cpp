#include <iostream>
using namespace std;
int main ()
{
  int i,n,k,j;
  cin >> n >>k;
  int arr[n+1];

  for (i=1 ; i<=n ; ++i)
  cin >> arr[i];

  j=1;
  while (arr[j]>0 && j <= k|| arr[j]==arr[j-1] )
  ++j;

  cout << j-1;

}
