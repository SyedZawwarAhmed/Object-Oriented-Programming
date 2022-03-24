#include <iostream>

using namespace std;

int fib4(int n)
{
    int last = 0;
    int next = 1;
    for (int i = 0; i < n; i++)
    {
        int oldLast = last;
        last = next;
        next = oldLast + next;
    }
    return last;
}


int main()
{
    cout << fib4(6) << endl;
    return 0;
}