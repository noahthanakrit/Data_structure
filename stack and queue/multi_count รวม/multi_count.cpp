#include <iostream>
#include "stack"
#include "queue"
#include "vector"
using namespace std;

void count_multi(queue<int> q, vector<int> k)
{
    vector<pair<int, int>> result;
    queue<int> temp;
    for (int i : k)
    {
        int count = 0;
        temp = q;
        while (!temp.empty())
        {
            if (temp.front() == i)
            {
                count += 1;
            }
            temp.pop();
        }
        result.push_back({i, count});
    }

    for (const auto &data : result)
    {
        cout << "{" << data.first << ":" << data.second << "}" << endl;
    }
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    ;

    vector<int> k = {30, 0, -5};
    count_multi(q, k);
    return 0;
}