#include <stdio.h>
#include <math.h>

int main()
{
  int n = 0;
  int i = 0;
  int bibka = 0;
  int x = 0;
  
  scanf("%i", &n);

  int a[1000];

  for (; i < n; i++)
  {
    scanf("%i", &a[i]);
  }
  
  scanf("%i", &bibka);
  
  x = a[0];
  
  for (i = 0; i < n; i++)
  {
    if (abs(bibka - a[i]) < abs( bibka - x))
      {
        x = a[i];
      }
      
    else if (abs(bibka - a[i]) == abs(bibka - x))
      {
        if (a[i] < x)
          {
            x = a[i];
          }
      }
  }
  
  printf("%i", x);
  
  return 0;
}