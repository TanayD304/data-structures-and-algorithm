import java.util.*;

class fundamentalOfArrays {
    public static void printArray(int[] nums) {
        for(int i=0;i<nums.length;i++) {
            System.out.print(nums[i]+" ");
        }
        System.out.println();
    }

    // public int linearSearch(int nums[], int target) {
    //     //Your code goes here
    // }

    // public int largestElement(int[] nums) {

    // }

    // public int secondLargestElement(int[] nums) {

    // }

    // public int findMaxConsecutiveOnes(int[] nums) {

    // }

    public static void rotateArrayByOne(int[] nums) {
        int size = nums.length;

        int temp = nums[0];
        for(int i=0;i<size-1;i++) {
            nums[i]=nums[i+1];
        }
        nums[size-1]=temp;
    }

    // public void rotateArray(int[] nums, int k) {

    // }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] nums = new int[n];

        for(int i=0;i<n;i++) {
            nums[i] = scanner.nextInt();
        }

        printArray(nums);
        rotateArrayByOne(nums);
        printArray(nums);

    }
}