public class MatrixRowWise extends MatrixLin {
    public MatrixRowWise(int height, int width) {
        this.height = height;
        this.width = width;
        this.data = new double[height * width];
    }

    public Matrix2dArray delinearize() {
        Matrix2dArray newMatrix = new Matrix2dArray(height, width);
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                newMatrix.setElem(i, j, data[i * width + j]);
            }
        }
        return newMatrix;
    }

    public double getElem(int i, int j) {
        return data[i * width + j];
    }

    public void setElem(int i, int j, double value) {
        data[i * width + j] = value;
    }

    public Matrix add(Matrix other) {
        MatrixRowWise otherMatrix = (MatrixRowWise) other;
        Matrix newMatrix = new MatrixRowWise(this.height, this.width);
        for (int i = 0; i < this.height; i++) {
            for (int j = 0; j < this.width; j++) {
                newMatrix.setElem(i, j, this.data[i * this.width + j] + otherMatrix.data[i * otherMatrix.width + j]);
            }
        }
        return newMatrix;

    }

    public Matrix multiply(Matrix other) {
        MatrixRowWise otherMatrix = (MatrixRowWise) other;
        Matrix newMatrix = new MatrixRowWise(this.height, otherMatrix.width);
        for (int i = 0; i < this.height; i++) {
            for (int j = 0; j < otherMatrix.width; j++) {
                double sum = 0;
                for (int k = 0; k < this.width; k++) {
                    sum += this.data[i * this.width + k] * otherMatrix.data[k * otherMatrix.width + j];
                }
                newMatrix.setElem(i, j, sum);

            }
        }
        return newMatrix;
    }

    public void to_string() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                System.out.print(data[i * width + j] + "   ");
            }
            System.out.println();
        }
    }
}
