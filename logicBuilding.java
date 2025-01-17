
import java.util.ArrayList;


class logicBuilding {

    public static void printArray(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }

    public static int removeDuplicates(int[] nums) {
        int size = nums.length;

        int lastUniqueIndex = 0;
        int indexToInsert = 1;
        for (int i = 1; i < size; i++) {
            if (nums[i] != nums[lastUniqueIndex]) {
                nums[indexToInsert++] = nums[i];
                lastUniqueIndex = i;
            }
        }

        return indexToInsert;
    }

    public static int missingNumber(int[] nums) {
        int size = nums.length;

        int ans = size;
        for (int i = 0; i < size; i++) {
            ans = ans ^ nums[i] ^ i;
        }

        return ans;
    }

    public static int[] unionArray(int[] nums1, int[] nums2) {
        int size1 = nums1.length;
        int size2 = nums2.length;

        int i = 0;
        int j = 0;

        ArrayList<Integer> ans = new ArrayList<>();

        while (i < size1 && j < size2) {
            if (nums1[i] < nums2[j]) {
                if (ans.isEmpty() || nums1[i] != ans.get(ans.size() - 1)) {
                    ans.add(nums1[i]);
                }
                i++;
            } else if (nums1[i] > nums2[j]) {
                if (ans.isEmpty() || nums2[j] != ans.get(ans.size() - 1)) {
                    ans.add(nums2[j]);
                }
                j++;
            } else {
                if (ans.isEmpty() || nums2[j] != ans.get(ans.size() - 1)) {
                    ans.add(nums2[j]);
                }
                j++;
                i++;
            }
        }

        while (i < size1) {
            if (ans.isEmpty() || nums1[i] != ans.get(ans.size() - 1)) {
                ans.add(nums1[i]);
            }
            i++;
        }

        while (j < size2) {
            if (ans.isEmpty() || nums2[j] != ans.get(ans.size() - 1)) {
                ans.add(nums2[j]);
            }
            j++;
        }

        int[] ansExact = new int[ans.size()];

        for(i=0;i<ans.size();i++) {
            ansExact[i] = ans.get(i);
        }

        return ansExact;
    }

    public static void moveZeroes(int[] nums) {
        int size = nums.length;

        int posNonZero = 0;
        for(int i=0;i<size;i++) {
            if(nums[i]!=0) {
                nums[posNonZero++] = nums[i];
            }
        }

        while(posNonZero<size) {
            nums[posNonZero++]=0;
        }
    }

    public static int[] intersectionArray(int[] nums1, int[] nums2) {
        int size1 = nums1.length;
        int size2 = nums2.length;

        int i = 0, j = 0;
        ArrayList<Integer> ans = new ArrayList<>();
        while (i < size1 && j < size2) {
            if (nums1[i] == nums2[j]) {
                ans.add(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        int[] ansExact = new int[ans.size()];

        for (i = 0; i < ans.size(); i++) {
            ansExact[i] = ans.get(i);
        }

        return ansExact;
    }

    public static void main(String[] args) {
        // int[] nums1 = {1,2,,4,5};
        // int[] nums2 = {1,2,7};

        // Remove Duplicates from sorted Array
        // printArray(nums);
        // System.out.println(removeDuplicates(nums));
        // printArray(nums);

        // Find Missing Number
        // System.out.println(missingNumber(nums));

        // Move Zeros to end
        // printArray(nums);
        // moveZeroes(nums);
        // printArray(nums);

        // Union of 2 Arrays
        // int[] ans = unionArray(nums1, nums2);
        // printArray(ans);

        // Intersection of 2 arrays
        // int[] ans = intersectionArray(nums1, nums2);
        // printArray(ans);
    }
}
