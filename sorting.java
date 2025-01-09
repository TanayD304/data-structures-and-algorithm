
import java.util.*;

class sorting {
    public static void swap(int[]nums, int a, int b) {
        int temp = nums[a];
        nums[a] = nums[b];
        nums[b] = temp;
    }

    public static void printArray(int[] nums) {
        for(int i=0;i<nums.length;i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }

    public static int[] selectionSort(int[] nums) {
        int minInd;
        int size = nums.length;

        for(int i=0;i<size-1;i++) {
            minInd = i;

            for(int j=i;j<size;j++) {
                if(nums[minInd]>nums[j]) {
                    minInd = j;
                }
            }

            swap(nums, i, minInd);
        }

        return nums;
    }

    public static int[] bubbleSort(int[] nums) {
        int size = nums.length;

        for(int i=0;i<size-1;i++) {
            for(int j=0;j<size-1-i;j++) {
                if(nums[j]>nums[j+1]) {
                    swap(nums, j, j+1);
                }
            }
        }

        return nums;
    }

    public static int[] insertionSort(int[] nums) {
        int size = nums.length;
        int temp;
        int pos;

        for(int i=1;i<size;i++) {
            pos = i-1;
            temp = nums[i];

            while(pos>=0 && nums[pos]>temp) {
                nums[pos+1] = nums[pos];
                pos--;
            }

            pos++;

            nums[pos] = temp;
        }

        return nums;
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
        // nums = selectionSort(nums);
        // nums = bubbleSort(nums);
        // nums = insertionSort(nums);

        printArray(nums);
    }
}