import java.util.Scanner;
class forloop {
    public static void main(String[] args) {
        for(int i=1;i<=10;i++) {
            System.out.println("Tanay");
        }

        Scanner scanner = new Scanner(System.in);
        int size = scanner.nextInt();
        int[] arr = new int[size];
        int sum=0;
        for(int i=0;i<size;i++) {
            arr[i]=scanner.nextInt();
            sum+=arr[i];
        }

        System.out.print(sum);
    }
}