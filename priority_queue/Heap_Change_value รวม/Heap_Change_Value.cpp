#include <iostream>
#include "vector"
#include "queue"
using namespace std;

void change_value(priority_queue<int> &pq, size_t pos, int value)
{
    vector<int> v;
    while (!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }

    if (value >= 0)
    {
        v[pos + 1] = value;
    }
    else
    {
        v[pos / 2] = value;
    }

    for (int each : v)
    {
        pq.push(each);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, pos, value;
    std::cin >> n >> pos >> value;

    // read and create priority_queue
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        pq.push(x);
    }

    change_value(pq, pos, value);

    // display
    std::cout << "Size is = " << pq.size() << std::endl;
    while (pq.empty() == false)
    {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << std::endl;
    return 0;
}