#include <iostream>
#include <vector>
#include "student.h"
using namespace std;

int main()
{
    CP::vector<int> v;
    while (true)
    {
        char order;
        cin >> order;

        if (order == 'q')
        {
            break;
        }
        else if (order == 'a')
        {
            int x, y;
            cin >> x >> y;

            auto it = v.begin() + x;
            v.insert(it, y);
        }
        else if (order == 'p')
        {
            cout << v.size() << endl;
            for (int each : v)
            {
                cout << each << " ";
            }
            cout << endl;
        }
        else if (order == 'u')
        {
            int n;
            cin >> n;

            vector<CP::vector<int>::iterator> removing;
            for (int i = 0; i < n; ++i)
            {
                int num;
                cin >> num;

                if (num >= 0 && num < (int)v.size())
                {
                    auto it = v.begin() + num;
                    removing.push_back(it);
                }
            }
            v.uniq(removing);
        }
    }
    return 0;
}