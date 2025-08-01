#include <iostream>
#include "vector";
using namespace std;

namespace CP
{
    template <typename T>
    class list
    {
    public:
        vector<T> v;
        void remove_all(const T &value)
        {
            for (auto it = v.begin(); it != v.end(); it++)
            {
                if (*it == value)
                {
                    auto remove = it;
                    v.erase(remove);
                }
            }
        }

        void push_back(const T &value)
        {
            v.push_back(value);
        }

        void print()
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
        }
    };
}

int main()
{
    CP::list<int> l;
    int n, k;
    std::cin >> n >> k;
    while (n--)
    {
        int x;
        std::cin >> x;
        l.push_back(x);
    }
    l.remove_all(k);
    l.print();
    return 0;
}
