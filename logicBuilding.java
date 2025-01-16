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
        for(int i=1;i<size;i++) {
            if(nums[i]!=nums[lastUniqueIndex]) {
                nums[indexToInsert++] = nums[i];
                lastUniqueIndex = i;
            }
        }

        return indexToInsert;
    }
    public static void main(String[] args) {
        int[] nums = {-2,2,4,4,4,4,5,5};

        // Remove Duplicates from sorted Array
        printArray(nums);
        System.out.println(removeDuplicates(nums));
        printArray(nums);
    }
}