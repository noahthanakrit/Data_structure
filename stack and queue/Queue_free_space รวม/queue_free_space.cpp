#include <iostream>
#include "queue"
#include "vector"
using namespace std;

int main()
{
    int N;
    cin >> N;

    queue<int> q;
    vector<int> v;
    int mCap = 0;

    for (int i = 0; i < N; ++i)
    {
        int a, k;
        cin >> a >> k;

        if (a == 0)
        {
            for (int j = 0; j < k; j++)
            {
                q.push(1);
                v.push_back(1);
            }

            mCap = v.capacity();
        }
        else if (a == 1)
        {
            for (int j = 0; j < k && !q.empty(); j++)
            {
                q.pop();
                v.pop_back();
            }
        }
    }

    cout << abs(mCap - (int)q.size()) << endl;
    return 0;
}
