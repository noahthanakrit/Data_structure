#include <iostream>
#include <list>
#include "vector"
#include "algorithm"
using namespace std;

namespace CP
{
    template <typename T>
    class vector
    {
        list<T> l;

    public:
        void push_back(const T &value)
        {
            l.push_back(value);
        }

        void uniq()
        {
            list<T> non_repeat_elements;
            for (T each : l)
            {
                if (find(non_repeat_elements.begin(), non_repeat_elements.end(), each) == non_repeat_elements.end())
                {
                    non_repeat_elements.push_back(each);
                }
            }
            l = non_repeat_elements;
        }

        void print()
        {
            cout << "Result" << endl;
            for (auto it = l.begin(); it != l.end(); it++)
            {
                cout << *it << " ";
            }
        }
    };
}

int main()
{
    int n;
    cin >> n;

    CP::vector<int> v;

    std::vector<int> input(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> input[i];
        v.push_back(input[i]);
    }
    v.uniq();
    v.print();

    return 0;
}