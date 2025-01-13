
import java.util.*;
import java.util.Arrays;

class fundamentalOfArrays {

    public static void printArray(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }

    public static int linearSearch(int nums[], int target) {
        int size = nums.length;

        for (int i = 0; i < size; i++) {
            if (nums[i] == target) {
                return i;
            }
        }

        return -1;
    }

    public static int largestElementBruteForce(int[] nums) {
        Arrays.sort(nums);
        return nums[nums.length-1];
    }

    public static int largestElement(int[] nums) {
        int size = nums.length;

        int lar = nums[0];

        for (int i = 1; i < size; i++) {
            if (lar < nums[i]) {
                lar = nums[i];
            }
        }

        return lar;
    }

    public static int secondLargestElementBruteForce(int[] nums) {
        int size = nums.length;
        Arrays.sort(nums);

        int i = size - 2;
        while (i >= 0) {
            if (nums[size - 1] != nums[i]) {
                return nums[i];
            }
            i--;
        }

        return -1;
    }

    public static int secondLargestElement(int[] nums) {
        int size = nums.length;
        int lar = -1;
        int lar2 = -1;

        for (int i = 0; i < size; i++) {
            if (nums[i] > lar) {
                lar2 = lar;
                lar = nums[i];
            } else if (nums[i] > lar2 && nums[i] != lar) {
                lar2 = nums[i];
            }
        }

        return lar2;
    }

    public static int findMaxConsecutiveOnes(int[] nums) {
        int size = nums.length;

        int maxi = 0;
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                if (maxi < count) {
                    maxi = count;
                }
                count = 0;
            }
        }

        if (maxi < count) {
            maxi = count;
        }

        return maxi;
    }

    public static void rotateArrayByOne(int[] nums) {
        int size = nums.length;

        int temp = nums[0];
        for (int i = 0; i < size - 1; i++) {
            nums[i] = nums[i + 1];
        }
        nums[size - 1] = temp;
    }

    public static void rotateArrayBruteForce(int[] nums, int k) {
        int size = nums.length;
        k = k % size;

        for (int i = 0; i < k; i++) {
            rotateArrayByOne(nums);
        }

    }

    public static void rotateArrayBetter(int[] nums, int k) {
        int size = nums.length;
        k = k % size;
        int[] temp = new int[size];

        for (int i = 0; i < size; i++) {
            if (i < k) {
                temp[((i - k) + 2 * size) % size] = nums[i];
            } else {
                temp[(i - k) % size] = nums[i];
            }
        }

        for (int i = 0; i < size; i++) {
            nums[i] = temp[i];
        }
    }

    public static void rotateArray(int[] nums, int k) {
        int size = nums.length;
        k = k % size;

        int count = 0;
        int i = 0;
        int pos, newPos, temp1, temp2;
        while (count < size) {
            pos = i;
            temp2 = nums[pos];
            do {
                if (pos < k) {
                    newPos = ((pos - k) + 2 * size) % size;
                } else {
                    newPos = (pos - k) % size;
                }
                temp1 = nums[newPos];
                nums[newPos] = temp2;
                temp2 = temp1;
                pos = newPos;
                count++;
            } while (pos != i);
            i++;
        }
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++) {
            nums[i] = scanner.nextInt();
        }

        // Rotate array to left by 1
        // printArray(nums);
        // rotateArrayByOne(nums);
        // printArray(nums);

        // Rotate array to left by k
        // printArray(nums);
        // rotateArrayBruteForce(nums, 2);
        // rotateArrayBetter(nums, 2);
        // rotateArray(nums, 2);
        // printArray(nums);
    }
}
