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

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        // System.out.println(countDigit(n));
        System.out.println(countOddDigit(n));
    }
}
