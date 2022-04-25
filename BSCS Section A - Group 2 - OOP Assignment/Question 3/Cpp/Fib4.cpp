#include <iostream>
using namespace std;

class Fib4
{
    int n;

public:
    int fib4(int n)
    {
        int last = 0, next = 1;
        for (int i = 0; i < n; i++)
        {
            int oldLast = last;
            last = next;
            next = oldLast + next;
        }
        return last;
    }
};

int main()
{
    Fib4 f;

    cout << f.fib4(20) << endl;
    cout << f.fib4(40) << endl;
    return 0;
}