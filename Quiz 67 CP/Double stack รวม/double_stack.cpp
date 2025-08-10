#include <iostream>
#include <vector>
#include <string>
#include "limits"
using namespace std;

namespace CP
{
    template <typename T>
    class stack
    {
    protected:
        vector<T> v;

    public:
        int const &size()
        {
            return v.size();
        }

        void push(const T &value)
        {
            v.push_back(value);
        }

        T &top()
        {
            return v[v.size() - 1];
        }

        void pop()
        {
            v.pop_back();
        }

        T &bottom()
        {
            return v[0];
        }

        void push_bottom(const T &element)
        {
            v.insert(v.begin(), element);
        }

        void pop_bottom()
        {
            v.erase(v.begin());
        }
    };
}

template <typename T>
void runStack()
{
    CP::stack<T> s;
    while (true)
    {
        string order;
        cin >> order;
        if (order == "q")
        {
            break;
        }
        else if (order == "s")
        {
            cout << s.size() << endl;
        }
        else if (order == "tp")
        {
            T val;
            cin >> val;
            s.push(val);
        }
        else if (order == "to")
        {
            s.pop();
        }
        else if (order == "tt")
        {
            cout << s.top() << endl;
        }
        else if (order == "bp")
        {
            T val;
            cin >> val;
            s.push_bottom(val);
        }
        else if (order == "bo")
        {
            s.pop_bottom();
        }
        else if (order == "bt")
        {
            cout << s.bottom() << std::endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (n == 1)
    {
        runStack<int>();
    }
    else if (n == 2)
    {
        runStack<string>();
    }
    return 0;
}