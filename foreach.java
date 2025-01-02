
import java.util.Scanner;

class foreach {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int size = scanner.nextInt();
        int[] arr = new int[size];
        int sum = 0;
        for (int i = 0; i < size; i++) {
            arr[i] = scanner.nextInt();
            sum += arr[i];
        }

        System.out.println(sum);
        for(int n:arr) {
            System.out.println(n);
        }
        scanner.close();
    }
}
