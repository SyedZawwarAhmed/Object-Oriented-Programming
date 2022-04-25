#include <iostream>
using namespace std;

class Fib3
{
public:
    int fib3(int n, int *temp)
    {

        if (n <= 1)
        {
            return n;
        };

        if (temp[n] != 0)
        {
            return temp[n];
        }
        temp[n] = fib3(n - 1, temp) + fib3(n - 2, temp);
        return temp[n];
    };

    int callMemo(int n)
    {
        int *temp = new int[n + 1];
        for (int i = 0; i < n + 1; i++)
        {
            temp[i] = 0;
        }

        int result = fib3(n, temp);
        delete[] temp;
        return result;
    };
};

int main()
{
    Fib3 f;

    cout << f.callMemo(5) << endl;
    cout << f.callMemo(40) << endl;
    return 0;
}