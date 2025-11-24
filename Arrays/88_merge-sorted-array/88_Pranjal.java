class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int m1 = m-1;
        int n1 = n-1;
        int end = m+n-1;
        while(n1>=0){
            if(m1>=0 && nums1[m1]>nums2[n1]){
                nums1[end] = nums1[m1];
                m1--;
            } else{
                nums1[end] = nums2[n1];
                n1--;
            }
            end--;
        }
    }
}