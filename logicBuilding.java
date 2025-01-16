
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

    public static void main(String[] args) {
        int[] nums = {1, 3, 6, 4, 2, 5};

        // Remove Duplicates from sorted Array
        // printArray(nums);
        // System.out.println(removeDuplicates(nums));
        // printArray(nums);

        // Find Missing Number
        System.out.println(missingNumber(nums));
    }
}
