import java.util.Scanner;

class recursion {

    public static void printXNTimes(int x, int n) {
        // base
        if(n==0) return;

        // recursive
        System.out.print(x + " ");
        printXNTimes(x, n-1);
    }

    public static void print1toN(int n) {
        // base
        if (n == 0) {
            return;
        }

        // recursive
        print1toN(n - 1);
        System.out.println(n);
    }

    public static void printNto1(int n) {
        // base
        if (n == 0) {
            return;
        }

        // recursive
        System.out.println(n);
        printNto1(n - 1);
    }

    // public static long factorial(int n) {
    //     //your code goes here
    // }

    // public static int NnumbersSum(int N) {
    //     //your code goes here
    // }

    // public static int arraySum(int[] nums) {
    //     //your code goes here
    // }

    // public static Vector<Character> reverseString(Vector<Character> s) {
    //     //your code goes here
    // }

    // public static boolean palindromeCheck(String s) {
    //     //your code goes here
    // }

    // public static boolean checkPrime(int num) {
    //     //your code goes here
    // }

    // public static int[] reverseArray(int[] nums) {
    //     //your code goes here
    // }

    // public static boolean isSorted(ArrayList<Integer> nums) {
    //     //your code goes here
    // }

    // public static int addDigits(int num) {
    //     //your code goes here
    // }

    // public static int fib(int n) {
    //     //your code goes here
    // }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int n = scanner.nextInt();
        // printXNTimes(x, n);
        // print1toN(n);
        printNto1(n);
    }
}
