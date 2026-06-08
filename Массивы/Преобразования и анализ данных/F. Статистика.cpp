#include <stdio.h>

int main()
{
  
  int n = 0;
  int i = 0;
  int j = 0;
  int l = 0;
  
  scanf("%i", &n);
  
  int a[1000];
  int x[1000];
  int b[1000];
  int c[1000];
  
  for (;i < n; i++)
  {
    scanf("%i", &a[i]);
    x[i] = a[i];
  }
  
  for (i = 0;i < n; i++)
  {
    if (a[i] % 2 != 0)
      {
        b[j] = a[i];
        j++;
      }
  }
  
  for (i = 0;i < n; i++)
  {
    if (x[i] % 2 == 0)
      {
        c[l] = x[i];
        l++;
      }
  }
  
  for (i = 0; i < j; i++)
    {
      printf("%i ", b[i]);
    }
    
    printf("\n");
    
  for (i = 0; i < l; i++)
    {
      printf("%i ", c[i]);
    }
    
    printf("\n");
    
  if (j <= l)
    {
      printf("YES");
    }
  else
    {
      printf("NO");
    }
  
  return 0;
}