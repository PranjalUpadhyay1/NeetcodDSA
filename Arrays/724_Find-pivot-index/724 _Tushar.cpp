#include <bits/stdc++.h>
class Solution{
  public:
  int pivotIndex(std::vector<int> &nums){
    int data_count = nums.size() , j = data_count -1 , sum = 0 ;
    for(int i = 0 ; i < data_count ; i ++){
      sum = sum + nums[i];
    }
    int temp = 0 ;
    for(int i = 0 ; i < data_count ; i ++){
      temp+= nums[i]; 
      if(temp-nums[i]==sum-temp){
        return i;
      }
    }
    return -1;
  }
};
int main(){
  int data_count , data ;
  std::vector<int> nums;
  Solution sol;
  std::cin>>data_count ;
  for(int i = 0 ; i < data_count ; i ++){
    std::cin>>data;
    nums.emplace_back(data);
  }
  std::cout<<sol.pivotIndex(nums);
}