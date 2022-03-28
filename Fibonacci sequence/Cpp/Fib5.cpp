#include <iostream>

using namespace std;

class Fib5
{
    int n;
    int *intStream;

public:
    int *fib5(int n)
    {
        int *array = new int[n];
        for (int i = 0; i < n; i++)
        {
            int last = 0;
            int next = 1;
            for (int j = 0; j < i; j++)
            {
                int oldLast = last;
                last = next;
                next = oldLast + next;
            }
            array[i] = last;
        }
        return array;
    }

    Fib5(int n)
    {
        this->n = n;
        this->intStream = fib5(n);
    }

    void display()
    {
        for (int i = 0; i < this->n; i++)
        {
            cout << this->intStream[i] << endl;
        }
    }
};

int main()
{
    Fib5 fib(20);
    fib.display();

    return 0;
}