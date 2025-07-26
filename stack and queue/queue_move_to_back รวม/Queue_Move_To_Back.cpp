#include <iostream>
#include "queue"
#include "vector"
#include "map"
using namespace std;

void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

void move_to_back(size_t pos, queue<int> &q)
{
    vector<int> v;
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    int target = v[pos];
    v.erase(v.begin() + pos);
    v.push_back(target);
    for (int each : v)
    {
        q.push(each);
    }
}

int main()
{
    queue<int> q;

    while (true)
    {
        char order;
        cin >> order;

        if (order == 'p')
        {
            cout << "Size " << q.size() << ": ";
            printQueue(q);
        }
        else if (order == 'u')
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (order == 'o')
        {
            q.pop();
        }
        else if (order == 'm')
        {
            int pos;
            cin >> pos;
            move_to_back(pos, q);
        }
        else if (order == 'q')
        {
            break;
        }
    }
    return 0;
}