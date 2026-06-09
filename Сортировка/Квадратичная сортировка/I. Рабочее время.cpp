#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(void)
{
    int K;

    cin >> K;

    vector<long long> moments(K);

    int daysInMonth[12] =
    {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    for (int i = 0; i < K; i++)
    {
        string date;
        string time;

        cin >> date >> time;

        int day =
            stoi(date.substr(0, 2));

        int month =
            stoi(date.substr(3, 2));

        int hour =
            stoi(time.substr(0, 2));

        int minute =
            stoi(time.substr(3, 2));

        int dayNumber = 0;

        for (int j = 0; j < month - 1; j++)
        {
            dayNumber += daysInMonth[j];
        }

        dayNumber += day - 1;

        moments[i] =
            (long long)dayNumber * 1440 +
            hour * 60 +
            minute;
    }

    sort(moments.begin(), moments.end());

    long long answer = 0;

    for (int i = 0; i < K; i += 2)
    {
        long long start = moments[i];
        long long finish = moments[i + 1];

        for (long long minute = start;
             minute <= finish;
             minute++)
        {
            int minuteOfDay =
                minute % 1440;

            if (minuteOfDay >= 600 &&
                minuteOfDay <= 1079)
            {
                answer++;
            }
        }
    }

    cout << answer / 60
         << ':'
         << setw(2)
         << setfill('0')
         << answer % 60;

    return 0;
}