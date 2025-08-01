#include <iostream>
#include "vector"
using namespace std;

namespace CP
{
    template <typename T>
    class queue
    {
        vector<T> v;
        int aux;

    public:
        queue()
        {
            this->aux = 0;
        }

        void reverse()
        {
            for (int i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i] << " ";
            }
        }

        void push(const T &value)
        {
            v.push_back(value);
        }

        void pop()
        {
            v.erase(v.begin());
        }

        int front()
        {
            return v[0];
        }

        int back()
        {
            return v[v.size() - 1];
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
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        q.push(v[i]);
    }

    q.reverse();
    return 0;
}
