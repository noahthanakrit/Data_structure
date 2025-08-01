#include <iostream>
#include <stack>
#include "vector"
using namespace std;

namespace CP
{
    template <typename T>
    class stack
    {
        vector<T> v;

    public:
        void push(const T &value)
        {
            v.push_back(value);
        }

        void pop()
        {
            v.pop_back();
        }

        void multi_pop(size_t k)
        {
            if (k > v.size())
            {
                k = v.size();
            }
            int i = 0;
            while (i < k)
            {
                this->pop();
                i++;
            }
        }

        std::stack<T> remove_top(size_t k)
        {
            if (k > v.size())
            {
                k = v.size();
            }
            std::stack<T> remove_elements;

            for (size_t i = 0; i < k; ++i)
            {
                remove_elements.push(v.back());
                v.pop_back();
            }
            return remove_elements;
        }

        void print()
        {
            cout << "Stack size = " << v.size() << " Data = ";
            for (int i = v.size() - 1; i >= 0; --i)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }

        int size()
        {
            return v.size();
        }

        bool empty()
        {
            bool isEmpty = false;
            if (v.size() == 0)
            {
                isEmpty = true;
            }
            return isEmpty;
        }

        T top()
        {
            return v[v.size() - 1];
        }
    };
}

int main()
{
    CP::stack<int> s;

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
            int num;
            cin >> num;
            s.push(num);
        }
        else if (order == 'd')
        {
            s.pop();
        }
        else if (order == 'm')
        {
            int times;
            cin >> times;
            s.multi_pop(times);
        }
        else if (order == 'r')
        {
            int k;
            cin >> k;

            stack<int> removed = s.remove_top(k);
            cout << "remove_top Result: Size = " << s.size() << " Data = ";
            while (!removed.empty())
            {
                cout << removed.top() << " ";
                removed.pop();
            }
            cout << endl;
        }
        else if (order == 'p')
        {
            s.print();
        }
    }
    return 0;
}
