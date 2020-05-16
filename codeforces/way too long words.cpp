#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main ()
{
  int n, i;
  char str[100];
  cin >> n;


for (i=0 ; i<n ; ++i)
{
  scanf ("%s", str);
    if (strlen(str) > 10)
    cout << str[0] << strlen (str) - 2 << str[strlen(str)-1] << endl;

  else
  puts (str);

}
return 0;
}
