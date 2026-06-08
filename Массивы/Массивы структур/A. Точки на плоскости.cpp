#include <stdio.h>
#include <math.h>
 
struct Point
    {
        long x, y;
    };
 
int main()
{
    int n = 0;
    int i = 0;
    int j = 0;
     
    double min = -1;
    int min1 = 0;
    int min2 = 0;
     
    double max = -1;
    int max1 = 0;
    int max2 = 0;
     
    double dst = 0;
     
    Point p[1000];
     
    scanf("%i", &n);
     
    for (; i < n; i++)
    {
        scanf("%ld", &p[i].x);
        scanf("%ld", &p[i].y);
    }
     
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            dst = sqrt(pow(p[i].x - p[j].x, 2) + pow(p[i].y - p[j].y, 2));
                 
            if (min > dst || min == -1)
            {
                min = dst;
                min1 = i;
                min2 = j;
            }
                 
            if (max < dst || max == -1)
            {
                max = dst;
                max1 = i;
                max2 = j;
            }
        }
    }
     
     
    printf("%i %i\n", min1 + 1, min2 + 1);
    printf("%i %i", max1 + 1, max2 + 1);
     
return 0;
}