#include <iostream>
using namespace std;

class Fib2
{
    int n;

public:
    int fib2(int n)
    {
        if (n < 2)
        {
            return n;
        };

        return fib2(n - 2) + fib2(n - 1);
    }
};

int main()
{
    Fib2 f;

    cout << f.fib2(5) << endl;
    cout << f.fib2(10) << endl;
    return 0;
}