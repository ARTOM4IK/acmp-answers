#include <stdio.h>

int main()
{
  
  int n = 0;
  int i = 0;
  int j = 0;
  int m = 0;
  
  scanf("%i", &n);
  
  int a[1000];
  int b[1000];
  int c[1000];
  
  for (;i < n; i++)
  {
    scanf("%i", &a[i]);
  }
  
  scanf("%i", &m);
  
  for (i = 0;i < m; i++)
  {
    scanf("%i %i", &b[i], &c[i]);
  }
  
  for (i = 0;i < m; i++)
  {
    for (j = b[i] - 1; j < c[i]; j++)
    {
      printf("%i ", a[j]);
    }
    printf("\n");
  }
  
  
  return 0;
}