#include <iostream>
#include <string>

using namespace std;

class Matrix
{
public:
    virtual double getElem(int i, int j) = 0;
    virtual void setElem(int i, int j, double value) = 0;
    virtual Matrix &add(const Matrix &other) = 0;
    Matrix &multiply(const Matrix &other);
};

class Matrix2dArray : public Matrix
{
private:
    double **data;
    int height;
    int width;
    int min(int a, int b)
    {
        return 0;
    }

public:
    double getElem(int i, int j)
    {
        return data[i][j];
    }

    void setElem(int i, int j, double value)
    {
        data[i][j] = value;
    }

    Matrix2dArray(int height, int width)
    {
        this->height = height;
        this->width = width;
        data = new double *[height];
        for (int i = 0; i < height; i++)
        {
            data[i] = new double[width];
        }
        return;
    }

    // Matrix &multiply(const Matrix &other);

    Matrix &add(const Matrix &other)
    {
        Matrix2dArray newMatrix(this->height, this->width);
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                newMatrix.setElem(i, j, this->data[i][j] + other.data[i][j]);
            }
        }
        return newMatrix;
    }

    Matrix &multiply(const Matrix &other)
    {
        Matrix2dArray newMatrix(this->height, this->width);
        return newMatrix;
    }

    string toString()
    {
        string result = "hello";
        return result;
    }

    void displayMatrix()
    {
        for (int i = 0; i < this->height; i++)
        {
            for (int j = 0; j < this->width; j++)
            {
                cout << this->data[i][j] << " ";
            }
            cout << endl;
        }
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
    Matrix2dArray m1(2, 2);
    m1.setElem(0, 0, 1);
    m1.setElem(0, 1, 2);
    m1.setElem(1, 0, 3);
    m1.setElem(1, 1, 3);
    Matrix2dArray m2(2, 2);
    m2.setElem(0, 0, 1);
    m2.setElem(0, 1, 6);
    m2.setElem(1, 0, 4);
    m2.setElem(1, 1, 6);
    Matrix2dArray *m3 = new Matrix2dArray(2, 2);
    *m3 = m1.add(m2);
    return 0;
}
