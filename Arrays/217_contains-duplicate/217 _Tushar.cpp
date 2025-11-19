#include <bits/stdc++.h>
class Solution{
    public:
    bool containsDuplicate(std::vector<int> &nums){
        int data_count = nums.size();
        std::unordered_map<int,int> check ;
        for(int i = 0 ; i < data_count ; i ++){
            check[nums[i]]++;
            if(check[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};
void print(bool ans){
    if (ans){
        std::cout<<"Duplicates present."<<std::endl;
    }
    else{
        std::cout<<"No Duplicates."<<std::endl;
    }
}
int main(){
    int data_count ,data;
    std::vector<int> nums;
    Solution sol;
std::cin>>data_count;
for(int i = 0 ; i < data_count;i++){
    std::cin>>data;
    nums.emplace_back(data);
}
print(sol.containsDuplicate(nums));
}