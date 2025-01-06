
import java.lang.Math;
import java.util.Scanner;

class patterns {

    public static void pattern1(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void pattern2(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void pattern3(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            System.out.println();
        }
    }

    public static void pattern4(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(i);
            }
            System.out.println();
        }
    }

    public static void pattern5(int n) {
        while (n > 0) {
            for (int j = 1; j <= n; j++) {
                System.out.print("*");
            }
            System.out.println();
            n--;
        }
    }

    public static void pattern6(int n) {
        while (n > 0) {
            for (int j = 1; j <= n; j++) {
                System.out.print(j);
            }
            System.out.println();
            n--;
        }
    }

    public static void pattern7(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                System.out.print("*");
            }
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void pattern8(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i - 1; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * n - 2 * i + 1; j++) {
                System.out.print("*");
            }
            for (int j = 1; j <= i - 1; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void pattern9(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                System.out.print("*");
            }
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i - 1; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * n - 2 * i + 1; j++) {
                System.out.print("*");
            }
            for (int j = 1; j <= i - 1; j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void pattern10(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        n--;
        while (n > 0) {
            for (int j = 1; j <= n; j++) {
                System.out.print("*");
            }
            System.out.println();
            n--;
        }
    }

    public static void pattern11(int n) {
        int flag;
        for (int i = 1; i <= n; i++) {
            flag=i%2;
            for (int j = 1; j <= i; j++) {
                System.out.print(flag + " ");
                if(flag==0) flag=1;
                else flag=0;
            }
            System.out.println();
        }
    }

    public static void pattern12(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }
            for (int j = 1; j <= 2 * n - 2 * i; j++) {
                System.out.print(" ");
            }
            for (int j = i; j >= 1; j--) {
                System.out.print(j);
            }
            System.out.println();
        }
    }

    public static void pattern13(int n) {
        int num = 1;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=i;j++) {
                System.out.print(num+ " ");
                num++;
            }
            System.out.println();
        }
    }

    public static void pattern14(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print((char)(64+j));
            }
            System.out.println();
        }
    }

    public static void pattern15(int n) {
        while (n > 0) {
            for (int j = 1; j <= n; j++) {
                System.out.print((char) (64 + j));
            }
            System.out.println();
            n--;
        }
    }

    public static void pattern16(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print((char) (64 + i));
            }
            System.out.println();
        }
    }

    public static void pattern17(int n) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n-i;j++) {
                System.out.print(" ");
            }
            int k = 1;
            while(k<=i) {
                System.out.print((char) (64 + k));
                k++;
            }
            k=i-1;
            while(k>=1) {
                System.out.print((char) (64 + k));
                k--;
            }
            for(int j=1;j<=n-i;j++) {
                System.out.print(" ");
            }
            System.out.println();
        }
    }

    public static void pattern18(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print((char) (64 + n-i+j) + " ");
            }
            System.out.println();
        }
    }

    public static void pattern19(int n) {
        for(int i=1;i<=n;i++) {
            for(int j=n;j>=i;j--) {
                System.out.print("*");
            }
            for(int j=1;j<i;j++) {
                System.out.print("  ");
            }
            for (int j = n; j >= i; j--) {
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=i;j++) {
                System.out.print("*");
            }
            for(int j=1;j<=n-i;j++) {
                System.out.print("  ");
            }
            for(int j=1;j<=i;j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void pattern20(int n) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=i;j++) {
                System.out.print("*");
            }
            for(int j=1;j<=n-i;j++) {
                System.out.print("  ");
            }
            for(int j=1;j<=i;j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++) {
            if(i==1) continue;
            for(int j=1;j<=n-i+1;j++) {
                System.out.print("*");
            }
            for(int j=1;j<i;j++) {
                System.out.print("  ");
            }
            for(int j=1;j<=n-i+1;j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static void pattern21(int n) {
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=n;j++) {
                if(i==1 || i==n || j==1 || j==n) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }

    public static void pattern22(int n) {
        int top, left, right, bottom;
        for(int i=0;i<2*n-1;i++) {
            for(int j=0;j<2*n-1;j++) {
                top = i;
                left = j;
                right = 2*n-2-j;
                bottom = 2*n-2-i;
                System.out.print(n - Math.min(Math.min(top, bottom), Math.min(right, left)) + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        pattern1(n);
        pattern2(n);
        pattern3(n);
        pattern4(n);
        pattern5(n);
        pattern6(n);
        pattern7(n);
        pattern8(n);
        pattern9(n);
        pattern10(n);
        pattern11(n);
        pattern12(n);
        pattern13(n);
        pattern14(n);
        pattern15(n);
        pattern16(n);
        pattern17(n);
        pattern18(n);
        pattern19(n);
        pattern20(n);
        pattern21(n);
        pattern22(n);
    }
}
