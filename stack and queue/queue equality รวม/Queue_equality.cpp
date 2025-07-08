#include <iostream>
#include "queue"
using namespace std;

int main()
{
    queue<int> q1;
    queue<int> q2;

    q1.push(1);
    q1.push(3);
    q1.push(2);

    q2.push(1);
    q2.push(2);
    q2.push(3);

    bool areEqual = true;
    if (q1.size() != q2.size())
    {
        areEqual = false;
    }
    else
    {
        while (!q1.empty() || !q2.empty())
        {
            if (q1.front() != q2.front())
            {
                areEqual = false;
                break;
            }
            else
            {
                q1.pop();
                q2.pop();
            }
        }
    }
    cout << areEqual << endl;
    return 0;
}