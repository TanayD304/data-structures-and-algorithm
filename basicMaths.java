import java.util.*;
class basicMaths {
    public static int countDigit(int n) {
        int ans = 0;
        if(n==0) return 1;

        while(n>0) {
            ans++;
            n/=10;
        }

        return ans;
    }

    public static int countOddDigit(int n) {
        int ans = 0;
        while(n>0) {
            if(n%10%2==1) ans++;
            n/=10;
        }
        return ans;
    }

    public static int reverseNumber(int n) {
        int newNum = 0;

        while(n>0) {
            newNum*=10;
            newNum+=n%10;
            n/=10;
        }

        return newNum;
    }

    public static boolean isPalindrome(int n) {
        int revNum = reverseNumber(n);

        return n==revNum;
    }

    public static int largestDigit(int n) {
        int largest = 0;

        while(n>0) {
            if(largest<n%10) largest = n%10;
            n/=10;
        }

        return largest;
    }

    public static int factorial(int n) {
        if(n==0 || n==1) return 1;

        int ans = 1;
        while(n>1) {
            ans*=n;
            n--;
        }

        return ans;
    }

    public static boolean isArmstrong(int n) {
        int len = countDigit(n);
        int temp = n;
        int ans = 0;
        while(n>0) {
            ans+=Math.pow(n%10, len);
            n/=10;
        }

        return ans==temp;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        // System.out.println(countDigit(n));
        // System.out.println(countOddDigit(n));
        // System.out.println(reverseNumber(n));
        // System.out.println(isPalindrome(n));
        // System.out.println(largestDigit(n));
        // System.out.println(factorial(n));
        System.out.println(isArmstrong(n));
    }
}
