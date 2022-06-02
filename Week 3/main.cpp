#include <iostream>
#include "Vector.cpp"

using namespace std;

int main() {
    Vector v1;
    v1.display();

    Vector newVector = Vector();
    cout << "new vector" << newVector << endl;

    Vector v2(1,2);
    v2.display();

    Vector v3(v2);
    v3.display();

    Vector v4 = v2.add(v3);
    v4.display();

    Vector v5 = v2.subtract(v3);
    v5.display();

    Vector* v6 = new Vector(3, 5);
    v6->display();

    float dotProduct = v2.dotProduct(v3);
    cout << "Dot product of v2 and v3: " << dotProduct << endl;

    Vector v7 = *v6 + v3;
    v7.display();

    float v8 = v2 * v3;
    cout << "Dot product of v2 and v3: " << dotProduct << endl;

    cout << v7;
}