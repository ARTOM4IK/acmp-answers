#include <stdio.h>

int main()
{
  int n = 0;
  int b = 0;
  int i = 0;
  int c = 0;
  
  scanf("%i", &n);

  int a[1000];

  for (; i < n; i++)
  {
    scanf("%i", &a[i]);
  }
  
  scanf("%i", &b);

  for (i = 0; i < n; i++)
  {
    if (a[i] == b)
    {
      c++;
    }
  }

  printf("%i", c);

  return 0;
}