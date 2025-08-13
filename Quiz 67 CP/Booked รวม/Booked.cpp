#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

bool isCanSeat(string &type, string &seat, map<string, set<string>> &all_tickets)
{
    bool canSeat = false;
    if (all_tickets.find(type) != all_tickets.end())
    {
        if (all_tickets[type].find(seat) != all_tickets[type].end())
        {
            all_tickets[type].erase(seat);
            canSeat = true;
        }
    }
    return canSeat;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    map<string, set<string>> all_tickets;
    for (int i = 0; i < N; ++i)
    {
        string type, seat;
        cin >> type >> seat;
        all_tickets[type].insert(seat);
    }

    for (int j = 0; j < M; ++j)
    {
        int n;
        cin >> n;

        vector<pair<string, string>> booked(n);
        for (int k = 0; k < n; ++k)
        {
            cin >> booked[k].first >> booked[k].second;
        }

        bool result = true;
        vector<pair<string, string>> temp_removed;

        for (auto &[type, seat] : booked)
        {
            if (isCanSeat(type, seat, all_tickets))
            {
                temp_removed.push_back({type, seat});
            }
            else
            {
                result = false;
                break;
            }
        }

        if (!result)
        {
            for (auto &[type, seat] : temp_removed)
            {
                all_tickets[type].insert(seat);
            }
        }

        cout << (result ? "YES\n" : "NO\n");
    }
    return 0;
}
