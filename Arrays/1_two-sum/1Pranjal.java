class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            if (m.containsKey(target - num)) return new int[] { i, m.get(target - num) };
            m.put(num, i);
        }
        return new int[] {};        
    }
}