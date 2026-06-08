#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main( void )
{
    int N;
    int M;

    cin >> N >> M;

    cin.ignore();

    unordered_map<string, string> book;

    for (int i = 0; i < N; i++)
    {
        string phone;
        string fio;
        string address;

        getline(cin, phone);
        getline(cin, fio);
        getline(cin, address);

        book[phone] = fio + " (" + address + ")";
    }

    for (int i = 0; i < M; i++)
    {
        string phone;

        getline(cin, phone);

        cout << book[phone];

        if (i + 1 < M)
        {
            cout << '\n';
        }
    }

    return 0;
}