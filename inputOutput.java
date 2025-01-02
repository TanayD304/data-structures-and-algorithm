import java.util.Scanner;
class inputOutput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();
        double num2 = scanner.nextDouble();
        String num3 = scanner.next();
        System.out.println(num);
        System.out.println(num2);
        System.out.println(num3);
        scanner.close();
    }
}