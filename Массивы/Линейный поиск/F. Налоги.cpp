#include <stdio.h>

int main()
{
  int n = 0;
  int i = 0;
  double x = 0;
  int num = 0;

  scanf ("%i", &n);

  double a[154];
  double b[100];

  for (; i < n; i++)
	{
	  scanf("%lf", &a[i]);
	}

  for (i = 0; i < n; i++)
	{
	  scanf("%lf", &b[i]);
	}

  x = (a[0] / 100) * b[0];
  num = 1;

  for (i = 0; i < n; i++)
	{
	  if (x < (a[i] / 100) * b[i])
		{
		  x = (a[i] / 100) * b[i];
		  num = i + 1;
		}
	}

  printf("%i", num);
    
  return 0;
}
