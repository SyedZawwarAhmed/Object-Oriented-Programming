#include <iostream>

using namespace std;

class A {
    protected:
    int ivar = 7;
    public:
    void m1() {
        cout << "A's m1, ";
    }
    void m2() {
        cout << "A's m2, ";
    }
    void m3() {
        cout << "A's m3, ";
    }
    
};

class B: public A {
    public:
    void m1 () {
        cout << "B's m1, ";
    }  
};

class C: public B {
    public:
    void m3 () {
        cout << "C's m3, " << this->ivar + 6;
    }
};

int main () {
        A a = A();
        B b = B();
        C c = C();
        A a2 = C();
        a2.m1();
        a2.m2();
        a2.m3();
    return 0;
}