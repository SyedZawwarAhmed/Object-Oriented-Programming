import java.util.HashMap;
import java.util.Map;

public class Fib3 {
    static Map<Integer, Integer> memo = new HashMap<>(Map.of(0, 0, 1, 1));

    private static int Fib(int n) {
        if (!memo.containsKey(n)) {
            memo.put(n, Fib(n - 1) + Fib(n - 2));
        }
        return memo.get(n);
    }

    public static void main(String[] args) {
        System.out.println(Fib(0));
        System.out.println(Fib(1));
        System.out.println(Fib(2));
        System.out.println(Fib(3));
        System.out.println(Fib(4));
        System.out.println(Fib(5));
        System.out.println(Fib(8));
        System.out.println(Fib(20));
    }

}