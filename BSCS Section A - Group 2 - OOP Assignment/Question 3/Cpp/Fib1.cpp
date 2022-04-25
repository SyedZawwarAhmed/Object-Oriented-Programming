#include <iostream>
using namespace std;

class Fib1
{
public:
    int n;
    int fib(int n)
    {
        return fib(n - 1) + fib(n - 2);
    }
};
int main()
{
    Fib1 f;
    cout << f.fib(2) << endl;
    return 0;
}