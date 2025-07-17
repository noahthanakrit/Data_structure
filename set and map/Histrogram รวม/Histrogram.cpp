#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N;
    cin >> N;

    map<string, int> frequency;

    for (int i = 0; i < N; ++i)
    {
        string name;
        cin >> name;
        frequency[name]++;
    }

    for (auto &each : frequency)
    {
        if (each.second > 1)
        {
            cout << each.first << " " << each.second << endl;
        }
    }
    return 0;
}
