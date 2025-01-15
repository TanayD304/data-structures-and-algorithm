
import java.util.Scanner;

class arrayBasics {
    public static int sum(int arr[], int n) {
        int ans = 0;
        for(int i=0;i<n;i++) {
            ans+=arr[i];
        }
        return ans;
    }

    public static int countOdd(int[] arr, int n) {
        int count = 0;
        for(int i=0;i<n;i++) {
            if(arr[i]%2==1) {
                count++;
            }
        }
        return count;
    }

    public static void printArray(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]+ " ");
        }
        System.out.println();
    }

    public static void reverse(int[] arr, int n) {
        int temp;
        for(int i=0;i<n/2;i++) {
            temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }
    }

    public static boolean arraySortedOrNot(int[] arr, int n) {
        for(int i=1;i<n;i++) {
            if(arr[i]<arr[i-1]) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++) {
            arr[i] = scanner.nextInt();
        }
        // System.out.print(sum(arr, n));
        // System.out.println(countOdd(arr, n));
        // printArray(arr, n);
        // reverse(arr, n);
        // printArray(arr, n);
        System.out.println(arraySortedOrNot(arr, n));
    }
}