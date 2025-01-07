import java.util.*;

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

    public static long factorial(int n) {
        // base
        if(n<=1) return 1;

        // recursive
        return n*factorial(n-1);
    }

    public static int NnumbersSum(int N) {
        // base
        if(N==1) return 1;

        // recursive
        return N + NnumbersSum(N-1);
    }

    public static int arraySumRecursive(int[] nums, int n) {
        // base
        if(n==0) return nums[0];

        // recursive
        return nums[n] + arraySumRecursive(nums, n-1);
    }

    public static int arraySum(int[] nums) {
        return arraySumRecursive(nums, nums.length-1);
    }

    public static void reverseStringRecursive(Vector<Character> s, int start, int end) {
        // base
        if (start >= end) {
            return;
        }

        // recursive
        char temp = s.get(start);
        s.setElementAt(s.get(end), start);
        s.setElementAt(temp, end);
        reverseStringRecursive(s, start + 1, end - 1);
    }

    public static Vector<Character> reverseString(Vector<Character> s) {
        reverseStringRecursive(s, 0, s.size()-1);
        return s;
    }

    public static boolean palindromeCheckRecursive(String s, int start, int end) {
        //base
        if (start >= end) {
            return true;
        }
        if (s.charAt(start) != s.charAt(end)) {
            return false;
        }

        // recursive
        return palindromeCheckRecursive(s, start + 1, end - 1);
    }

    public static boolean palindromeCheck(String s) {
        return palindromeCheckRecursive(s, 0, s.length()-1);
    }

    public static boolean checkPrimeRecursive(int num, int div) {
        // base
        if (num == 1) {
            return false;
        }
        if (div == num) {
            return true;
        }
        if (num % div == 0) {
            return false;
        }

        // recursive
        return checkPrimeRecursive(num, div + 1);

    }

    public static boolean checkPrime(int num) {
        return checkPrimeRecursive(num, 2);
    }

    public static void reverseArrayRecursive(int[] nums, int start, int end) {
        // base
        if (start >= end) {
            return;
        }

        // recursive
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        reverseArrayRecursive(nums, start + 1, end - 1);
    }

    public static int[] reverseArray(int[] nums) {
        reverseArrayRecursive(nums, 0, nums.length);
        return nums;
    }

    public static boolean isSortedRecursive(ArrayList<Integer> nums, int size) {
        // base
        if (size == 0) {
            return true;
        }
        if (nums.get(size) < nums.get(size - 1)) {
            return false;
        }

        // recursive
        return isSortedRecursive(nums, size - 1);
    }

    public static boolean isSorted(ArrayList<Integer> nums) {
        return isSortedRecursive(nums, nums.size()-1);
    }

    public static int addDigitsRecursive(int num) {
        int ans = 0;
        while (num > 0) {
            ans += num % 10;
            num /= 10;
        }
        return ans;
    }

    public static int addDigits(int num) {
        return addDigitsRecursive(num);
    }

    public static int fib(int n) {
        // base
        if (n == 0 || n == 1) {
            return n;
        }

        // recursive
        return fib(n - 1) + fib(n - 2);
    }

    public static void main(String[] args) {
    }
}