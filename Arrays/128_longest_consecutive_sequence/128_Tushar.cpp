#include <bits/stdc++.h>
class Solution{
    public:
    int longestConsecutive(std::vector<int> &nums){
        if(nums.size()==0){
            return 0 ;
        }
        int data_count = nums.size() , seq = 1;
        std::unordered_set<int> check;
        for(int i = 0 ; i<data_count ; i ++){
            check.emplace(nums[i]);
        }
        for(int i = 0 ; i < data_count ; i ++){
            if(check.count(nums[i])&&!check.count(nums[i]-1)){
                int temp = 1 , num = nums[i];
                while(check.count(num+1)){
                    temp++;
                    num++;
                    check.erase(num);
                }
                check.erase(nums[i]);
                if(temp>seq){seq=temp;}
            }
        }
        return seq;
    }
};
int main(){
    int data_count , data;
    std::vector<int> nums;
    std::cin>>data_count;
    for(int i = 0 ; i < data_count ; i ++){
        std::cin>>data;
        nums.emplace_back(data);
    }
    Solution sol;
    std::cout<<sol.longestConsecutive(nums);
}