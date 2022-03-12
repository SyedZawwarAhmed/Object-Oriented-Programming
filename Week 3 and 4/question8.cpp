#include <iostream>

using namespace std;

class nPOINT {
    private:
    static int length;
    int p[4];

    public:
    nPOINT() {
        // this->length = 1;
        // this->p[0] = 1;
    };
    ~nPOINT() {

    };
    void Set(int index, int val) {
        this->p[index] = val;
    }

    int Get(int index) const {
        return this->p[index]; 
    }
    static int Length() { 
        return length;
    }
};
int nPOINT::length=4;

int main() {
    nPOINT p1;
    p1.Set(0, 3);
    cout << p1.Get(0) << endl;
    cout << p1.Length() << endl;
    return 0;
}