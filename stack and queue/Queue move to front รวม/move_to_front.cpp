#include <iostream>
#include "vector"
using namespace std;

namespace CP
{
    template <typename T>
    class queue
    {
        vector<T> v;

    public:
        void move_to_front(size_t pos)
        {
            if (pos >= v.size())
            {
                pos = v.size();
            }
            int relocate = v[pos - 1];
            auto it = v.begin() + pos - 1;
            v.erase(it);
            v.insert(v.begin(), relocate);
        }

        void push(const T &value)
        {
            v.push_back(value);
        }

        void pop()
        {
            v.erase(v.begin());
        }

        void print()
        {
            cout << "Size " << v.size() << ": ";
            for (int each : v)
            {
                cout << each << " ";
            }
            cout << endl;
        }
    };
}

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
        else if (order == 'o')
        {
            q.pop();
        }
        else if (order == 'p')
        {
            q.print();
        }
        else if (order == 'm')
        {
            int pos;
            cin >> pos;
            q.move_to_front(pos);
        }
    }
    return 0;
}
