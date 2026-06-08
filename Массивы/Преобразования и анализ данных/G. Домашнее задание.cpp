#include <stdio.h>

int main()
{
  
  int n = 0;
  int i = 0;
  int sum = 0;
  int min = 0;
  int max = 0;
  int indexmin = 0;
  int indexmax = 0;
  int mult = 1;
  int f = 0;
  
  scanf("%i", &n);
  
  int a[1000];
  
  for (;i < n; i++)
  {
    scanf("%i", &a[i]);
  }
  
  for (i = 0;i < n; i++)
  {
    if (a[i] > 0)
      {
        sum+= a[i];
      }
  }
  
  min = a[0];
  
  for (i = 0;i < n; i++)
  {
    if (a[i] < min)
      {
        min = a[i];
        indexmin = i;
      }
  }
  
  max = a[0];
  
  for (i = 0;i < n; i++)
  {
    if (a[i] > max)
      {
        max = a[i];
        indexmax = i;
      }
  }
  
  if (indexmin > indexmax)
    {
      f = indexmin;
      indexmin = indexmax;
      indexmax = f;
    }
  
  for (i = indexmin + 1; i < indexmax; i++)
    {
        mult = mult * a[i];
    }
  
  printf("%i %i", sum, mult);
  
  return 0;
}