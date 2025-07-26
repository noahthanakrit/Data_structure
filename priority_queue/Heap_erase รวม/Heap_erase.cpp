#include <iostream>
#include "queue"
#include "algorithm"
using namespace std;

void erase(priority_queue<int> &pq, int target)
{
    vector<int> v;
    while (!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    reverse(v.begin(), v.end());
    int erase_index = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == target)
        {
            erase_index = i;
            break;
        }
    }
    v.erase(v.begin() + erase_index);
    for (int e : v)
    {
        pq.push(e);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    priority_queue<int> pq;

    while (true)
    {
        char order;
        cin >> order;

        if (order == 'q')
        {
            break;
        }
        else if (order == 'i')
        {
            int num;
            cin >> num;
            pq.push(num);
        }
        else if (order == 'x')
        {
            pq.pop();
        }
        else if (order == 'd')
        {
            int erase_num;
            cin >> erase_num;
            erase(pq, erase_num);
        }
    }

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}