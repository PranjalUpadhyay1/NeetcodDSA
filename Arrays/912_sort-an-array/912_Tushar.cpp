#include <bits/stdc++.h>
class Solution{
    public:
    void merge(std::vector<int> &nums , int start, int mid , int end){
        int left = start , right = mid+1;
        std::vector<int> temp ;
        while(left<=mid && right<=end){
            if(nums[left]>nums[right]){
                temp.emplace_back(nums[right]);
                right++;
            }
            else{
                temp.emplace_back(nums[left]);
                left++;
            }
        }
        while(left<=mid){
            temp.emplace_back(nums[left]);
            left++;
        }
        while(right<=end){
            temp.emplace_back(nums[right]);
            right++;
        }
        for(int i = 0 ; i <=end; i ++){
            nums[start+i]=temp[i];
        }
    }
    void mergeSort(std::vector<int> &nums , int start , int end){
        int mid = (start+end)/2;
        if(start>=end){
            return;
        }
        mergeSort(nums,start,mid);
        mergeSort(nums,mid+1,end);
        merge(nums,start,mid,end);
    }
    std::vector<int> sortArray(std::vector<int> &nums ){
        int data_count = nums.size() ;
        mergeSort(nums , 0 , data_count-1);
        return nums;
    }
};

int main(){
    int data_count , data ;
    std::vector<int> nums;
    Solution sol;
    std::cin>>data_count ;
    for( int i = 0 ; i <data_count; i ++ ){
        std::cin>>data;
        nums.emplace_back(data);
    }
    nums=sol.sortArray(nums);
    for(auto i : nums){
        std::cout<<i<<" ";
    }
}