#include <iostream>

using namespace std;

enum Type
{
    LINE,
    CIRCLE,
    NONE
};

class Point
{
    // public:

public:
    float x;
    float y;
    Point()
    {
        this->x = 0;
        this->y = 0;
    }

    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    int getX()
    {
        return this->x;
    }

    int getY()
    {
        return this->y;
    }
};

class Curve
{
protected:
    Type type;
    Point *points;

public:
    Curve() {}

    Curve(Type type, int noOfPoints)
    {
        this->type = type;
        this->points = new Point[noOfPoints];
    }

    virtual void computePoints() = 0;

    friend ostream &operator<<(ostream &os, const Curve &c)
    {
        return os << endl;
    };
};

class ParametricCurve : public Curve
{
private:
    float minT;
    float maxT;
    float x;
    float y;
    int noOfPoints;
    float coefficientOfxT;
    float coefficientOfyT;
    float coefficientOfxc;
    float coefficientOfyc;
    float *tarray;

public:
    ParametricCurve(Type type, int noOfPoints, float minT, float maxT, float coefficientOfxT, float coefficientOfxc, float coefficientOfyT, float coefficientOfyc) : Curve(type, noOfPoints)
    {
        this->minT = minT;
        this->maxT = maxT;
        this->coefficientOfxT = coefficientOfxT;
        this->coefficientOfxc = coefficientOfxc;
        this->coefficientOfyT = coefficientOfyT;
        this->coefficientOfyc = coefficientOfyc;
        this->noOfPoints = noOfPoints;
    }

    void computePoints()

    {
        float newTArray[this->noOfPoints];
        newTArray[0] = this->minT;
        // compute the in between values of t and store them in the tarray array
        int index = 0;
        while (index < this->noOfPoints)
        {
            newTArray[index] = newTArray[index - 1] + (this->maxT - this->minT) / (this->noOfPoints);
            index++;
        }
        // compute x and y on the basis of maxT and minT
        for (int i = 0; i < this->noOfPoints; i++)
        {
            this->points[i].x = this->coefficientOfxT * newTArray[i] + this->coefficientOfxc;
            this->points[i].y = this->coefficientOfyT * newTArray[i] + this->coefficientOfyc;
        }
    }

    friend ostream &operator<<(ostream &os, const ParametricCurve &c)
    {
        // print all the points
        for (int i = 0; i < c.noOfPoints; i++)
        {
            os << "x = " << c.points[i].x << " y = " << c.points[i].y << endl;
        }
        return os;
    }
};

int main()
{
    Point p1(2, 3);
    Point p2(4, 5);
    ParametricCurve c1(LINE, 5, 10, 20, 1, 2, 3, 4);
    c1.computePoints();
    cout << c1 << endl;
    return 0;
}
