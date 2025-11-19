class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> s = new HashSet<>();
        for(int x: nums){
            // if(s.find(x) !=m.end()) return true;
            // s.insert(x);
            if (s.contains(x)) return true;
            s.add(x);
        }
        return false;
    }
}