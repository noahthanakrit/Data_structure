#include <iostream>
#include "queue"
#include "cmath"
using namespace std;

int height(priority_queue<int> pq)
{
    if (pq.size() == 0)
    {
        return -1;
    }

    int nodes = 0;
    int height = 0;
    while (true)
    {
        nodes += pow(2, height);
        if (nodes >= pq.size())
        {
            break;
        }
        height++;
    }
    return height;
}

int main()
{
    priority_queue<int> pq;
    while (true)
    {
        char order;
        cin >> order;

        if (order == 'q')
        {
            break;
        }
        else if (order == 'h')
        {
            cout << "Binary Heap with " << pq.size() << " nodes has height " << height(pq) << endl;
        }
        else if (order == 'd')
        {
            pq.pop();
        }
        else if (order == 'a')
        {
            int num;
            cin >> num;
            pq.push(num);
        }
    }
    return 0;
}