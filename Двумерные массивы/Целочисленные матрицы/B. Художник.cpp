#include <iostream>

struct point
{
    int x1;
    int x2;
    int y1;
    int y2;
};

int main()
{
    int n = 0;
    int m = 0;
    int k = 0;
    
    std::cin >> n >> m >> k;
    
    int a[100][100];
    point p[5000];
    
    for (int i = 0; i < k; i++)
    {
        std::cin >> p[i].x1 >> p[i].y1 >> p[i].x2 >> p[i].y2;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = 0;
        }   
    }
    
    
    
    for (int l = 0; l < k; l++)
    {
        for (int i = p[l].x1; i < p[l].x2; i++)
        {
            for (int j = p[l].y1; j < p[l].y2; j++)
            {
                a[i][j] = 1;
            } 
        }
        
    }
    
    int c = 0;
    
    
        
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                c++;
            }
        }   
    }
    
    std::cout << c;
    
    return 0;
}