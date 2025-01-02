import java.util.Scanner;
class ifElse {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int age = scanner.nextInt();
        if(age>=18) {
            System.out.print("Adult");
        } else {
            System.out.print("Teen");
        }
        scanner.close();
    }
}