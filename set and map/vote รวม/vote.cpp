#include <iostream>
#include "map"
#include "vector"
#include "algorithm"
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    map<string, int> votes;

    for (int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        votes[name]++;
    }

    vector<pair<int, string>> temp;

    for (const auto &data : votes)
    {
        temp.push_back({data.second, data.first});
    }

    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());

    int answer = temp[0].first;
    for (int i = 0; i < K; ++i)
    {
        answer = min(answer, temp[i].first);
    }
    cout << answer << endl;
    return 0;
}
