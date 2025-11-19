class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer, Integer> m = new HashMap<>();
        ArrayList<ArrayList<Integer>> mat = new ArrayList<>(nums.length + 1);

        // for(int n:nums) mat.add(new ArrayList<>());
        for (int i = 0; i <= nums.length; i++) mat.add(new ArrayList<>());
        for(int n:nums) m.put(n, m.getOrDefault(n,0)+1);

        for(Map.Entry<Integer, Integer> entry: m.entrySet()){
            int num = entry.getKey();
            int freq = entry.getValue();
            mat.get(freq).add(num);
        }

        int[] result = new int[k];
        int x= 0;
        for(int i=nums.length;i>=0 && x < k; i--){
            for(int num:mat.get(i)){
                result[x++]=num;
                if(x>=k) break;
            }
        }
        return result;
    }
}