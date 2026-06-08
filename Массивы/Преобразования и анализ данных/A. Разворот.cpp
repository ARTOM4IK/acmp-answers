#include <stdio.h>

int main()
{
  
  int n = 0;
  int i = 0;
  
  scanf("%i", &n);
  
  int a[1000];
  
  for (;i < n; i++)
  {
    scanf("%i", &a[i]);
  }
  
  for (i = 0;i < n; n--)
  {
    printf("%i ", a[n - 1]);
  }
  
  return 0;
}