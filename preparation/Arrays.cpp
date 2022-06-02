#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int *a = new int[size];

    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        a[i] = value;
    }

    for (int i = 0; i < size; i++) {
        cout << a[i] << ",";
    }

    return 0;
}