public abstract class MatrixLin implements Matrix {
    protected double data[];
    protected int height;
    protected int width;

    public abstract Matrix2dArray delinearize();

    protected static int min(int a, int b) {
        return a < b ? a : b;
    }
}
