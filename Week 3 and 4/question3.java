class A {
    int ivar = 7;
    void m1() {
        System.out.println("A's m1, ");
    }
    void m2 () {
        System.out.println("A's m2, ");
    }
    void m3 () {
        System.out.println("A's m3, ");
    }
}

class B extends A {
    void m1() {
        System.out.println("B's m1, ");
    }
}

class C extends A {
    void m3() {
        System.out.println("C's m3, "+(ivar + 6));
    }
}


