public class Fib4 {
    private static int fib4 (int n) {
        int last = 0, next = 1;
        for (int i = 0; i < n; i++) {
            int oldLast = last;
            last = next;
            next = oldLast + next;
        }
        return last;
    }

    public static void main(String [] args) {
        System.out.println(fib4(0));
        System.out.println(fib4(1));
        System.out.println(fib4(2));
        System.out.println(fib4(3));
        System.out.println(fib4(4));
        System.out.println(fib4(5));
        System.out.println(fib4(6));
    }
}
