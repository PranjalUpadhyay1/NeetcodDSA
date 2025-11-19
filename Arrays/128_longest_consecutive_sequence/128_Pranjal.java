class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> s = new HashSet<>();
        for(int x:nums) s.add(x);
        int i=0;
        for(int x:nums){
            if(!s.contains(x-1)){
                int lenght = 1;
                s.remove(x);
                while(s.contains(x+lenght)){
                    s.remove(x+lenght);
                    lenght++;
                }
                i = Math.max(i,lenght);
            }
        }
        return i;
    }
}