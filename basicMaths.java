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

    public static boolean isPerfectBf(int n) {
        if (n == 1)
            return false;
        int ans = 1;
        for(int i=2;i<n;i++) {
            if(n%i==0) ans+=i;
        }
        return ans==n;
    }

    public static boolean isPerfectOt(int n) {
        if (n == 1)
            return false;
        int ans = 1;
        for(int i=2;i*i<=n;i++) {
            if(n%i==0) {
                ans+=i;
                if(n/i!=i) ans+=n/i;
            }
        }
        return ans==n;
    }

    public static boolean isPrime(int n) {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static int primeUptoN(int n) {
        int ans = 0;
        for (int i = 2; i <= n; i++) {
            if (isPrime(n)) {
                ans++;
            }
        }

        return ans;
    }

    public static int GCDBf(int n1, int n2) {
        int range = Math.min(n1, n2);
        int largest = 1;
        for (int i = 2; i <= range; i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                largest = i;
            }
        }

        return largest;
    }
    public static int GCDBetter(int n1, int n2) {
        int range = Math.min(n1, n2);
        for (int i = range; i > 1; i--) {
            if (n1 % i == 0 && n2 % i == 0) {
                return i;
            }
        }

        return 1;
    }

    public static int GCD(int n1, int n2) {
        while (n1 > 0 && n2 > 0) {
            if (n1 > n2) {
                n1 = n1 % n2;
            }else {
                n2 = n2 % n1;
            }
        }

        if (n1 == 0) {
            return n2;
        }
        return n1;
    }

    public static int LCM(int n1, int n2) {
        return n1 * n2 / GCD(n1, n2);
    }

    public static void main(String[] args) {

    }
}
