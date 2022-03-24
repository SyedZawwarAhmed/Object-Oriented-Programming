#include <iostream>

using namespace std;

int fib2(int n)
{
    if (n < 2) { return n; }
    return fib2(n - 1) + fib2(n - 2);
}

int main()
{
    cout << fib2(5) << endl;
    return 0;
}