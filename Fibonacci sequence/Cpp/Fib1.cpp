#include <iostream>

using namespace std;

int fib1(int n)
{
    return fib1(n - 1) + fib1(n - 2);
}

int main()
{
    cout << fib1(5) << endl;
    return 0;
}