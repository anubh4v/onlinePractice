#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  int i,t,a,b,x,y,maxSide1,maxSide2,smallSide1,smallSide2;
  cin >> t;

  for (i=0 ; i<t ; ++i)
  {
    cin >> a >> b;
    cin >> x >> y;

    if (a > b)
    maxSide1 = a, smallSide1 =b;
    else
    maxSide1 = b, smallSide1 =a;

    if (x > y)
    maxSide2 = x, smallSide2 = y;
    else
    maxSide2 = y, smallSide2 = x;

    if (maxSide1 != maxSide2)
    cout << "NO"<< endl;
    else if (smallSide1 + smallSide2 == maxSide1)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
  }

  return 0;
}
