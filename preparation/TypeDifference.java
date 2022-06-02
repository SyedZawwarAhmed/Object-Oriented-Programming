class TypeDifference {
    public static void main(String[] args) {
        String s1 = "127";
        String s2 = new String("127");

        if (s1 == s2) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }

        System.out.println(s1.getClass().getSimpleName());
        System.out.println(s2.getClass().getSimpleName());
        System.out.println(s1);
        System.out.println(s2);
    }
}
