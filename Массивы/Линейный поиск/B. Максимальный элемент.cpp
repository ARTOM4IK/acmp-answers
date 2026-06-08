#include <stdio.h>

int main()
{
  int n = 0;
  int l = 0;
  int r = 0;
  int i = 0;
  int index = 0;
  
  
  scanf("%i", &n);

  int a[1000];

  for (; i < n; i++)
  {
    scanf("%i", &a[i]);
  }
  
  scanf("%i", &l);
  scanf("%i", &r);
  
  int c = a[l - 1];
  index = l;

  for (i = l - 1; i <= r - 1; i++)
  {
    if (a[i] > c)
    {
      c = a[i];
      index = i + 1;
    }
  }
  
  printf("%i %i", c, index);
  
  return 0;
}