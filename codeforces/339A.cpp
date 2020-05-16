#include <iostream>
#include <string>

using namespace std;
void exchange (char *a, char *b);

int main ()
{
  string str;
  int i,j;
  cin >> str;
  for (i=0 ; i<str.size(); i += i + 2)
  {
    for (j=i ; j<str.size(); j += j+2)
    {
    if (str.at(i) > str.at(j))
    exchange (&str.at(i), &str.at(j));
    }
  }
  cout << str << endl;
  return 0;
}

void exchange (char *a, char *b)
{
  char c;
  c=*a;
  *a=*b;
  *b=c;
}
