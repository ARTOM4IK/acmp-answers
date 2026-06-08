#include <stdio.h>

int main()
{
  
  int n = 0;
  int i = 0;
  int m = 0;
  int index = 0;
  
  scanf("%i", &n);
  
  int a[100];
  
  for (;i < n; i++)
  {
    scanf("%i", &a[i]);
  }
  
  scanf("%i", &m);
  
  for (i = 0;i < n; i++)
  {
    if (i == n && a[i] >= m)
    {
      index = i + 1;
    }
    else if (a[i] > m && m > a[i + 1])
      {
        index = i + 2;
      }
    else if (a[i] == m)
      {
        index = i + 2;
      }
  }
  
  printf("%i", index);
  
  return 0;
}