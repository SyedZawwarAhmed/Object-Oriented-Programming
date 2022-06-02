#include <iostream>         
#include <string.h>


using namespace std;

class Vector {
    float vertical; 
    float horizontal;
                        
    public:
    // null constructor
    Vector() {
        vertical = 0;
        horizontal = 0;
    }

    // parametric constructor
    Vector (float vertical, float horizontal) {
        this->vertical = vertical;
        this->horizontal = horizontal;
    }

    // copy constructor
    Vector (const Vector &other) {
        this->vertical = other.vertical;
        this->horizontal = other.horizontal;
    }

    void display() {
        cout << "(" << vertical << ", " << horizontal << ")" << endl;
    }

    Vector add(Vector other) {
        Vector result;
        result.vertical = this->vertical + other.vertical;
        result.horizontal = this->horizontal + other.horizontal;
        return result;
    }

    Vector subtract (Vector other) {
        Vector result;
        result.vertical = this->vertical - other.vertical;
        result.horizontal = this->horizontal - other.horizontal;
        return result;
    }

    float dotProduct (Vector other) {
        return this->vertical * other.vertical + this->horizontal * other.horizontal;
    }

    // operator overloading
    Vector operator+(Vector other) {
        Vector result;
        result.vertical = this->vertical + other.vertical;
        result.horizontal = this->horizontal + other.horizontal;
        return result;
    }

    Vector operator-(Vector other) {
        Vector result;
        result.vertical = this->vertical - other.vertical;
        result.horizontal = this->horizontal - other.horizontal;
        return result;
    }

    float operator* (Vector other) {
        return this->vertical * other.vertical + this->horizontal * other.horizontal;
    }

    //overload << operator
    friend ostream& operator<<(ostream& os, const Vector& v) {
        os << "(" << v.vertical << ", " << v.horizontal << ")";
        return os;
    }
    


    // destructor
    ~Vector() {
        // do nothing
    }
};