#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[100], str2[100];
  int i;
  scanf ("%s%s", str1, str2);

  

  for (i=0 ; i<strlen (str1) ; ++i)
  {
    if (str1[i] < 97)
    str1[i] += 32;

    if (str2[i] <97)
    str2[i] += 32;

    if (str1[i] == str2[i] )
    continue;
    else if (str1[i] > str2[i])
    {
      printf ("1");
      break;
    }
    else
    {
      printf ("-1");
      break;
    }
  }
  if (i == strlen (str1))
  printf ("0");
  return 0;
}
