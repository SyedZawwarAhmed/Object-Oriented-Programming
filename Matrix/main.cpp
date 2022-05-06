#include <iostream>
#include <string>

using namespace std;

class Matrix
{
public:
    virtual double getElem(int i, int j) = 0;
    virtual void setElem(int i, int j, double value) = 0;
    virtual Matrix &add(const Matrix &other) = 0;
    virtual Matrix &multiply(const Matrix &other) = 0;
};

class Matrix2dArray : public Matrix
{
private:
    double **data;
    int height;
    int width;
    int min(int a, int b)
    {
    }

public:
    Matrix2dArray(int height, int width)
    {
        this->height = height;
        this->width = width;
        data = new double *[height];
        for (int i = 0; i < height; i++)
        {
            data[i] = new double[width];
        }
    }

    Matrix &add(const Matrix &other)
    {
        Matrix2dArray newMatrix(this->height, this->width);
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                newMatrix.setElem(this)
            }
        }
    }

    Matrix &multiply(const Matrix &other)
    {
    }

    string toString()
    {
        string result = "hello";
        return result;
    }

    ~Matrix2dArray()
    {
        for (int i = 0; i < this->height; i++)
        {
            delete[] data[i];
        }
        delete[] data;
    }
};

int main()
{

    return 0;
}
