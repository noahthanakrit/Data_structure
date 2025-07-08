#include <iostream>
#include <queue>
using namespace std;

class RecentCounter
{
private:
    queue<int> calls;

public:
    RecentCounter() {};

    int ping(int t)
    {
        calls.push(t);

        while (!calls.empty() && calls.front() < t - 3000)
        {
            calls.pop();
        }
        return calls.size();
    }
};

int main()
{
    RecentCounter *obj = new RecentCounter();
    cout << obj->ping(1) << endl;    // Ping at t = 1
    cout << obj->ping(100) << endl;  // Ping at t = 100
    cout << obj->ping(3001) << endl; // Ping at t = 3001
    cout << obj->ping(3002) << endl; // Ping at t = 3002
    delete obj;                      // Clean up
    return 0;
}