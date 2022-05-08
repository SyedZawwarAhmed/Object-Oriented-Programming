interface Matrix {
    public double getElem(int i, int j);

    public void setElem(int i, int j, double value);

    public Matrix add(Matrix other);

    public Matrix multiply(Matrix other);
}

class Matrix2dArray implements Matrix {
    private int height;
    private int width;
    private double data[][];

    public Matrix2dArray(int height, int width) {
        this.height = height;
        this.width = width;
        data = new double[height][width];
    }

    private int min(int a, int b) {
        return 0;
    }

    public double getElem(int i, int j) {
        return data[i][j];
    }

    public void setElem(int i, int j, double value) {
        data[i][j] = value;
    }

    public Matrix add(Matrix other) {
        Matrix2dArray otherMatrix = (Matrix2dArray) other;
        Matrix newMatrix = new Matrix2dArray(2, 2);
        for (int i = 0; i < this.height; i++) {
            for (int j = 0; j < this.width; j++) {
                newMatrix.setElem(i, j, this.data[i][j] + otherMatrix.data[i][j]);
            }
        }
        return newMatrix;
    }

    public Matrix multiply(Matrix other) {
        Matrix newMatrix = new Matrix2dArray(2, 2);
        return newMatrix;
    }

    public void displayMatrix() {
        for (int i = 0; i < this.height; i++) {
            for (int j = 0; j < this.width; j++) {
                System.out.print(this.data[i][j] + "   ");
            }
            System.out.println("");
        }
        // System.out.println("Hello World");
    }
}

class Main {
    public static void main(String[] args) {
        Matrix2dArray m1 = new Matrix2dArray(2, 2);
        m1.setElem(0, 0, 1);
        m1.setElem(0, 1, 2);
        m1.setElem(1, 0, 3);
        m1.setElem(1, 1, 3);
        Matrix2dArray m2  = new Matrix2dArray(2, 2);
        m2.setElem(0, 0, 1);
        m2.setElem(0, 1, 6);
        m2.setElem(1, 0, 4);
        m2.setElem(1, 1, 6);
        Matrix m3 = m1.add(m2);
        Matrix2dArray m4 = (Matrix2dArray) m3;
        m4.displayMatrix();
    }
}