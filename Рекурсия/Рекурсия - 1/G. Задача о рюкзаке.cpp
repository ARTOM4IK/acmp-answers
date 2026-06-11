#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct State
{
    long long w;
    long long p;
    int mask;
    int cnt;
};

long long W;
int n;
long long weight[20];
long long profit[20];

vector<int> getItems(int maskL, int maskR, int n1, int n2)
{
    vector<int> res;

    for (int i = 0; i < n1; i++)
        if (maskL & (1 << i))
            res.push_back(i + 1);

    for (int i = 0; i < n2; i++)
        if (maskR & (1 << i))
            res.push_back(n1 + i + 1);

    return res;
}

bool lexLess(int maskL1, int maskR1,
             int maskL2, int maskR2,
             int n1, int n2)
{
    vector<int> a = getItems(maskL1, maskR1, n1, n2);
    vector<int> b = getItems(maskL2, maskR2, n1, n2);

    return a < b;
}

int main()
{
    cin >> n >> W;

    for (int i = 0; i < n; i++)
        cin >> weight[i] >> profit[i];

    int n1 = n / 2;
    int n2 = n - n1;

    vector<State> L, R;

    for (int mask = 0; mask < (1 << n1); mask++)
    {
        long long w = 0;
        long long p = 0;
        int cnt = 0;

        for (int i = 0; i < n1; i++)
        {
            if (mask & (1 << i))
            {
                w += weight[i];
                p += profit[i];
                cnt++;
            }
        }

        if (w <= W)
            L.push_back({w, p, mask, cnt});
    }

    for (int mask = 0; mask < (1 << n2); mask++)
    {
        long long w = 0;
        long long p = 0;
        int cnt = 0;

        for (int i = 0; i < n2; i++)
        {
            if (mask & (1 << i))
            {
                w += weight[n1 + i];
                p += profit[n1 + i];
                cnt++;
            }
        }

        if (w <= W)
            R.push_back({w, p, mask, cnt});
    }

    long long bestProfit = -1;
    int bestCnt = 0;
    int bestMaskL = 0;
    int bestMaskR = 0;

    for (auto &left : L)
    {
        for (auto &right : R)
        {
            if (left.w + right.w > W)
                continue;

            long long curProfit = left.p + right.p;
            int curCnt = left.cnt + right.cnt;

            bool better = false;

            if (curProfit > bestProfit)
            {
                better = true;
            }
            else if (curProfit == bestProfit)
            {
                if (curCnt < bestCnt)
                {
                    better = true;
                }
                else if (curCnt == bestCnt)
                {
                    if (lexLess(
                            left.mask, right.mask,
                            bestMaskL, bestMaskR,
                            n1, n2))
                    {
                        better = true;
                    }
                }
            }

            if (better)
            {
                bestProfit = curProfit;
                bestCnt = curCnt;
                bestMaskL = left.mask;
                bestMaskR = right.mask;
            }
        }
    }

    vector<int> ans =
        getItems(bestMaskL, bestMaskR, n1, n2);

    cout << ans.size() << ' ' << bestProfit << '\n';

    for (int i = 0; i < (int)ans.size(); i++)
    {
        if (i)
            cout << ' ';
        cout << ans[i];
    }

    return 0;
}