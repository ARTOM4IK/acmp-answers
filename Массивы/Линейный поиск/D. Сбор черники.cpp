#include <stdio.h>

int main()
{
  int n = 0;
  int i = 0;
  int sum = 0;
  
  scanf("%i", &n);

  int a[1000];

  for (; i < n; i++)
  {
    scanf("%i", &a[i]);
  }
  
  a[n] = a[0];
  a[n + 1] = a[1];
  
  for (i = 0; i < n; i++)
  {
    if (sum < a[i] + a[i + 1] + a[i + 2])
      {
        sum = a[i] + a[i + 1] + a[i + 2];
      }
  }
  
  printf("%i", sum);
  
  return 0;
}