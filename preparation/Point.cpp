#include <iostream>

using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point() // null
    {
        this->x = 0;
        this->y = 0;
    }

    Point(int x, int y) // parameterized
    {
        this->x = x;
        this->y = y;
    }

    Point(const Point &other) // copy
    {
        this->x = other.x;
        this->y = other.y;
    }

    void setPoint(int x, int y) {
        this->x = x;
        this->y = y;
    }

    void display()
    {
        cout << "x = " << this->x << "\n"
             << "y = " << this->y << endl;
    }

    Point add(const Point other) {
        Point result;
        // other.setPoint(0, 0);
        result.x = this->x + other.x;
        result.y = this->y + other.y;
        return result;
    }

    // Point operator+(const Point other) {
    //     Point result;
    //     // other.setPoint(0, 0);
    //     result.x = this->x + other.x;
    //     result.y = this->y + other.y;
    //     return result;
    // }

    friend Point operator+(const Point p1, const Point p2) {
        Point result;
        // other.setPoint(0, 0);
        result.x = p1.x + p2.x;
        result.y = p1.y + p2.y;
        return result;
    }

};

int main()
{

    // Point p1(2, 3);
    // Point p2(p1);
    // // p2.display();

    // Point *newPoint = new Point(3, 4);
    // // newPoint->display();

    // Point p3 = p2;
    // // p3.display();
    // p2.setPoint(5,6);
    // // p2.display();
    // // p3.display();

    // Point p4 = p3.add(p1);
    // p1.display();
    // // p4.display();

    Point p5(5, 8);
    Point p6(1, 7);

    Point addedPoint = p5.add(p6);
    addedPoint.display();
    p6.display();

    Point addedPointByOperatorOverloading = addedPoint + p5; //operator+(addedPoint, p5)
    addedPointByOperatorOverloading.display();

    return 0;
}