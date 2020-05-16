#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  int n, i;
  cin >> n;
  vector <int> card(n);

  for (i=0 ; i<n ; ++i)
  cin >> card.at(i);

  i=0;
  int j=n-1;
  int sumDima=0, sumSereja=0;
  int k=3;

  while (i<=j)
  {
    if(card.at(i) >= card.at(j))
    {
      if(k % 2 != 0)
      sumSereja += card.at(i);
      else
      sumDima += card.at(i);
      ++i;
    }
    else
    {
      if(k % 2 != 0)
      sumSereja += card.at(j);
      else
      sumDima += card.at(j);
      --j;
    }
    ++k;
  }
  cout << sumSereja << " " << sumDima;
  return 0;
}
