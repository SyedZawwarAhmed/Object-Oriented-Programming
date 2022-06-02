#include <iostream>

using namespace std;

int main() {
    cout << 5 << endl;

    int a = 5;

    cout << a << endl;

    cout << &a << endl;

    int *b = &a;

    cout << b << endl;
    cout << *b << endl;

    int **c = &b;
    cout << c << endl;
    cout << *c << endl;
    cout << **c << endl;

    return 0;
}