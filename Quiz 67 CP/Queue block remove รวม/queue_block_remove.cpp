#include <iostream>
#include "queue.h"
#include "student.h"
using namespace std;

int main()
{
    CP::queue<int> q;

    while (true)
    {
        char order;
        cin >> order;

        if (order == 'q')
        {
            break;
        }
        else if (order == 'u')
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (order == 'f')
        {
            cout << q.front() << endl;
        }
        else if (order == 's')
        {
            cout << q.size() << endl;
        }
        else if (order == 'o')
        {
            q.pop();
        }
        else if (order == 'b')
        {
            cout << q.back() << endl;
        }
        else if (order == 'B')
        {
            int x, y;
            cin >> x >> y;
            q.block_remove(x, y);
        }
    }
    return 0;
}