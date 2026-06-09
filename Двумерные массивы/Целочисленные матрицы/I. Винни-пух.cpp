#include <iostream>
#include <vector>
 
using namespace std;
 
int main(void)
{
    int N;
    int M;
 
    cin >> N >> M;
 
    int Y;
    int X;
 
    cin >> Y >> X;
 
    vector<vector<bool>> used(N, vector<bool>(M, false));
 
    int dy[4] = {0, 1, 0, -1};
    int dx[4] = {1, 0, -1, 0};
 
    int y = 0;
    int x = 0;
    int dir = 0;
 
    int berries = 0;
 
    while (true)
    {
        used[y][x] = true;
        berries++;
 
        if (y + 1 == Y && x + 1 == X)
        {
            cout << berries;
            break;
        }
 
        int ny = y + dy[dir];
        int nx = x + dx[dir];
 
        if (ny < 0 || ny >= N || nx < 0 || nx >= M || used[ny][nx])
        {
            dir = (dir + 1) % 4;
 
            ny = y + dy[dir];
            nx = x + dx[dir];
        }
 
        y = ny;
        x = nx;
    }
 
    return 0;
}