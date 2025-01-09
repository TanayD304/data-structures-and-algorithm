
import java.util.*;

class sorting {
    public static void printArray(int[] nums) {
        for(int i=0;i<nums.length;i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] nums = new int[n];
        for(int i=0;i<n;i++) {
            nums[i] = scanner.nextInt();
        }

        printArray(nums);
        // function calls

        printArray(nums);
    }
}