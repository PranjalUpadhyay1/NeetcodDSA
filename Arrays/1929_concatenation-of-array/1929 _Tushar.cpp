#include <bits/stdc++.h>
class Solution{
    public:
    std::vector<int> getConcatenation(std::vector<int> &nums , int data_count){
        std::vector<int> nums2 (2*data_count);
        for(int i = 0 ; i<data_count ; i ++){
            nums2[i]=nums[i];
            nums2[i+data_count]=nums[i];
        }
        return nums2;
    }
    void print(std::vector<int> &nums){
        std::cout<<"[";
        for(int i = 0 ; i < nums.size(); i ++){
            if(i==nums.size()-1){
                std::cout<<nums[i];
                break;
            }
            std::cout<<nums[i]<<", ";
        }
        std::cout<<"]"<<std::endl;
    }
};
int main(){
    int data_count , data;
    std::vector<int> nums;
    Solution sol;
    std::cin>>data_count;
    for(int i = 0 ; i < data_count ; i ++){
        std::cin>>data;
        nums.emplace_back(data);
    }
    std::vector<int>answer = sol.getConcatenation(nums,data_count);
    sol.print(answer);
    
}