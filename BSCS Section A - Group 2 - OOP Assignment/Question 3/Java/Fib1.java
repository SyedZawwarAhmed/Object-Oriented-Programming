public class Fib1 {
    private static int fib1(int n) {
        return fib1(n - 1) + fib1(n - 2);
    }

    public static void main(String[] args) {
        System.out.println(fib1(5));
    }
}