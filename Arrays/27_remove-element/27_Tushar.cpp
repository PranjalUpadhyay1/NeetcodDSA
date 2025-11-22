#include <bits/stdc++.h>
class Solution{
    public:
    int removeElement(std::vector<int> &nums , int val){
        int data_count = nums.size() , i = 0 , j = data_count -1 , count = 0 ;
        while(i<=j){
            if(nums[j]==val){
                j--;
                continue;
            }
            if(nums[i]==val){
                int temp = nums[i];
                nums[i]= nums[j];
                nums[j]= temp;
                i++;j--;count++;
            }
            else{
                i++;count++;
            }
        }
        nums.resize(count);
    return count;
    }
};
void print(std::vector<int> &nums){
    for( int i = 0 ; i < nums.size() ; i ++){
        std::cout<<nums[i]<<" ";
        std::cout<<std::endl;
    }
}
int main(){
    int data_count , data , val ;
    std::vector<int> nums ;
    std::cin>>data_count>>val;
    Solution sol;
    for(int i = 0 ; i < data_count ; i ++){
        std::cin>>data;
        nums.emplace_back(data);
    }
    std::cout<<sol.removeElement(nums,val)<<std::endl;
    print(nums);
}