class Solution {
    public int numRescueBoats(int[] people, int limit) {
        int count=0;
        Arrays.sort(people);
        int l = 0;
        int r = people.length-1;

        while(l<=r){
            int sum = people[l]+people[r];
            if(sum<=limit){
                count++;
                r--;
                l++;
            } else{
                count++;
                r--;
            }
        }
        return count;
    }
}