#include <iostream>
#include "queue"
using namespace std;

void operator_queue(int k, queue<int> q)
{
    vector<int> v;
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    if (k < 0 && k > -v.size())
    {
        int pos = v.size() + k;
        cout << "Data at " << k << " is " << v[pos] << endl;
    }
    else
    {
        cout << "Data at " << k << " is " << v[k] << endl;
    }
}

void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
};

int main()
{
    queue<int> q;
    while (true)
    {
        char order;
        cin >> order;

        if (order == 'q')
        {
            cout << "EXIT" << endl;
            break;
        }
        else if (order == 'a')
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (order == 'd')
        {
            q.pop();
        }
        else if (order == 'p')
        {
            cout << "Queue Size = " << q.size() << " Data = ";
            printQueue(q);
        }
        else if (order == 'k')
        {
            int pos;
            cin >> pos;
            operator_queue(pos, q);
        }
    }
    return 0;
}