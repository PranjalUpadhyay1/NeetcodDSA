class Solution {


    public int[] productExceptSelf(int[] nums) 
    {
     int[] ans = new int[nums.length];  
     int a=0;
     int multi_l=1;
     int multi_r=1;
     for(int i=nums.length-1;i>=0;i--)
     {

      ans[i]=multi_r;
      multi_r *=nums[i];

     } 

     for(int i=0;i<nums.length;i++)
     {
       int product = multi_l * ans[i];
       multi_l *=nums[i];
       nums[i]= product;
     }

     return nums;
        
    }
}
