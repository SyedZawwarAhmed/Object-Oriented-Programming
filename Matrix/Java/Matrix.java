interface Matrix {
    public double getElem(int i, int j);

    public void setElem(int i, int j, double value);

    public Matrix add(Matrix other);

    public Matrix multiply(Matrix other);
}
