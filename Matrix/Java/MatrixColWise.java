public class MatrixColWise extends MatrixLin {
    public MatrixColWise(int height, int width) {
        this.height = height;
        this.width = width;
        this.data = new double[height * width];
    }

    public Matrix2dArray delinearize(){
        Matrix2dArray newMatrix = new Matrix2dArray(height, width);
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                newMatrix.setElem(i, j, data[i + j * height]);
            }
        }
        return newMatrix;
    }

    public double getElem(int i, int j) {
        return data[i + j * height];
    }

    public void setElem(int i, int j, double value) {
        data[i + j * height] = value;
    }

    public Matrix add(Matrix other) {
        MatrixColWise otherMatrix = (MatrixColWise) other;
        Matrix newMatrix = new MatrixColWise(this.height, this.width);
        for (int i = 0; i < this.height; i++) {
            for (int j = 0; j < this.width; j++) {
                newMatrix.setElem(i, j, this.data[i + j * height] + otherMatrix.data[i + j * otherMatrix.height]);
            }
        }
        return newMatrix;
    }

    public Matrix multiply(Matrix other) {
        MatrixColWise otherMatrix = (MatrixColWise) other;
        Matrix newMatrix = new MatrixColWise(this.height, otherMatrix.width);

        for (int i = 0; i < this.height; i++) {
            for (int j = 0; j < otherMatrix.width; j++) {
                double sum = 0;
                for (int k = 0; k < this.width; k++) {
                    sum += this.data[i + k * height] * otherMatrix.data[k + j * otherMatrix.height];
                }
                newMatrix.setElem(i, j, sum);
            }
        }
        return newMatrix;
    }

    public void to_string() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                System.out.print(data[i + j * height] + "   ");
            }
            System.out.println();
        }
    }
}