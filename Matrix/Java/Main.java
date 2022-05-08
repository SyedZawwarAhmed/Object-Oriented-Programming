class Main {
    public static void main(String[] args) {
        Matrix2dArray m1 = new Matrix2dArray(2, 2);
        m1.setElem(0, 0, 1);
        m1.setElem(0, 1, 2);
        m1.setElem(1, 0, 3);
        m1.setElem(1, 1, 3);
        Matrix2dArray m2 = new Matrix2dArray(2, 2);
        m2.setElem(0, 0, 1);
        m2.setElem(0, 1, 6);
        m2.setElem(1, 0, 4);
        m2.setElem(1, 1, 6);
        Matrix m3 = m1.add(m2);
        Matrix2dArray m4 = (Matrix2dArray) m3;
        m1.to_string();
        m2.to_string();
        System.out.println("After Addition");
        m4.to_string();
        Matrix m5 = m1.multiply(m2);
        Matrix2dArray m6 = (Matrix2dArray) m5;
        System.out.println("After Multiplication");
        m6.to_string();

        MatrixColWise colWiseMatrix = new MatrixColWise(2, 2);
        colWiseMatrix.setElem(0, 0, 1);
        colWiseMatrix.setElem(0, 1, 2);
        colWiseMatrix.setElem(1, 0, 3);
        colWiseMatrix.setElem(1, 1, 4);

        colWiseMatrix.to_string();

        MatrixRowWise rowWiseMatrix = new MatrixRowWise(2, 2);
        rowWiseMatrix.setElem(0, 0, 9);
        rowWiseMatrix.setElem(0, 1, 3);
        rowWiseMatrix.setElem(1, 0, 7);
        rowWiseMatrix.setElem(1, 1, 4);

        rowWiseMatrix.to_string();

        Matrix m7 = colWiseMatrix.multiply(colWiseMatrix);
        MatrixColWise m8 = (MatrixColWise) m7;
        Matrix2dArray m9 = m8.delinearize();
        System.out.println("After Multiplication");
        m9.to_string();

        Matrix m10 = rowWiseMatrix.add(rowWiseMatrix);
        MatrixRowWise m11 = (MatrixRowWise) m10;
        Matrix2dArray m12 = m11.delinearize();
        System.out.println("After Addition");
        m12.to_string();
    }
}