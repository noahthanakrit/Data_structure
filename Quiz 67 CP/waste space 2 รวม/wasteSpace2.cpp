#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    CP::vector<int> v;
    int mCap = 1;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        char order;
        cin >> order;

        if (order == 'p')
        {
            int times;
            cin >> times;
            for (int j = 0; j < times; ++j)
            {
                v.push_back(1);
            }
            mCap = v.capacity();
        }
        else if (order == 'o')
        {
            int times;
            cin >> times;
            for (int j = 0; j < times; ++j)
            {
                v.pop_back();
            }
        }
        else if (order == 'r')
        {
            int size;
            cin >> size;
            v.resize(size);
            mCap = v.capacity();
        }
    }
    cout << (int)mCap - v.size() << endl;
    return 0;
}