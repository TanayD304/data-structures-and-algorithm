import java.util.*;

class fundamentalOfArrays {

    public static int linearSearch(int nums[], int target) {
        for(int i=0;i<nums.length;i++) {
            if(nums[i]==target) return i;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] nums = new int[n];

        for(int i=0;i<n;i++) {
            nums[i] = scanner.nextInt();
        }

        // linear search
        int target = scanner.nextInt();
        System.out.println(linearSearch(nums, target));
    }
}