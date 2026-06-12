#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct State
{
    long long sum;
    int cnt;
};

vector<long long> a;
vector<State> leftPart;
vector<State> rightPart;

void gen(int pos, int end, long long sum, int cnt, vector<State>& v)
{
    if (pos == end)
    {
        v.push_back({sum, cnt});
        return;
    }

    gen(pos + 1, end, sum, cnt, v);
    gen(pos + 1, end, sum + a[pos], cnt + 1, v);
    gen(pos + 1, end, sum + 2 * a[pos], cnt + 2, v);
}

int main()
{
    long long N;
    int M;

    cin >> N >> M;

    a.resize(M);

    long long total = 0;

    for (int i = 0; i < M; i++)
    {
        cin >> a[i];
        total += 2 * a[i];
    }

    if (total < N)
    {
        cout << -1;
        return 0;
    }

    int mid = M / 2;

    gen(0, mid, 0, 0, leftPart);
    gen(mid, M, 0, 0, rightPart);

    unordered_map<long long, int> best;

    for (auto cur : rightPart)
    {
        if (!best.count(cur.sum))
        {
            best[cur.sum] = cur.cnt;
        }
        else
        {
            if (cur.cnt < best[cur.sum])
            {
                best[cur.sum] = cur.cnt;
            }
        }
    }

    int answer = 1000000;

    for (auto cur : leftPart)
    {
        long long need = N - cur.sum;

        auto it = best.find(need);

        if (it == best.end())
        {
            continue;
        }

        answer = min(answer, cur.cnt + it->second);
    }

    if (answer == 1000000)
    {
        cout << 0;
    }
    else
    {
        cout << answer;
    }

    return 0;
}