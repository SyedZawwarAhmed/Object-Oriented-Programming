class Matrix2dArray implements Matrix {
    private double data[][];

    public Matrix2dArray(int height, int width) {
        this.data = new double[height][width];
    }

    // private static int min(int a, int b) {
    //     return a < b ? a : b;
    // }

    public double getElem(int i, int j) {
        return data[i][j];
    }

    public void setElem(int i, int j, double value) {
        data[i][j] = value;
    }

    public Matrix add(Matrix other) {
        Matrix2dArray otherMatrix = (Matrix2dArray) other;
        Matrix newMatrix = new Matrix2dArray(this.data.length, this.data[0].length);
        for (int i = 0; i < this.data.length; i++) {
            for (int j = 0; j < this.data[0].length; j++) {
                newMatrix.setElem(i, j, this.data[i][j] + otherMatrix.data[i][j]);
            }
        }
        return newMatrix;
    }

    public Matrix multiply(Matrix other) {
        Matrix2dArray otherMatrix = (Matrix2dArray) other;
        Matrix newMatrix = new Matrix2dArray(this.data.length, otherMatrix.data[0].length);
        for (int i = 0; i < this.data.length; i++) {
            for (int j = 0; j < otherMatrix.data[0].length; j++) {
                double sum = 0;
                for (int k = 0; k < this.data[0].length; k++) {
                    sum += this.data[i][k] * otherMatrix.data[k][j];
                }
                newMatrix.setElem(i, j, sum);
            }
        }
        return newMatrix;
    }

    public void to_string() {
        for (int i = 0; i < this.data.length; i++) {
            for (int j = 0; j < this.data[0].length; j++) {
                System.out.print(this.data[i][j] + "   ");
            }
            System.out.println("");
        }
    }
}
