#include <stdio.h>

int main()
{
  
  int n = 0;
  int i = 0;
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int f = 0;
  
  int x[1000];
  
  scanf("%i", &n);
  scanf("%i", &a);
  scanf("%i", &b);
  scanf("%i", &c);
  scanf("%i", &d);
  
  a--;
  b--;
  c--;
  d--;
  
  for (;i < n; i++)
    {
      x[i] = i + 1;
    }

  for (i = 0; i < (b - a) / 2 + 1; i++)
    {
      f = x[a + i];
      x[a + i] = x[b - i];
      x[b - i] = f;
    }
  
  
  for (i = 0; i < (d - c) / 2 + 1; i++)
    {
      f = x[c + i];
      x[c + i] = x[d - i];
      x[d - i] = f;
    }
  
  for (i = 0;i < n; i++)
    {
      printf("%i ", x[i]);
    }
    

  return 0;
}