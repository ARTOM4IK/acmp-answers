#include <stdio.h>

int main()
{
  int n = 0;
  int i = 0;
  int min = 0;
  int max = 0;
  
  scanf("%i", &n);

  int a[1000];

  for (; i < n; i++)
  {
    scanf("%i", &a[i]);
  }
  
  min = a[0];
  max = a[0];
  
  for (i = 0; i < n; i++)
  {
    if (a[i] < min)
      {
        min = a[i];
      }
  }
  
  for (i = 0; i < n; i++)
  {
    if (a[i] > max)
      {
        max = a[i];
      }
  }
  
  for (i = 0; i < n; i++)
  {
    if (a[i] == max)
      {
        a[i] = min;
      }
  }
  
  for (i = 0; i < n; i++)
  {
    printf("%i ", a[i]);
  }
  
  
  return 0;
}