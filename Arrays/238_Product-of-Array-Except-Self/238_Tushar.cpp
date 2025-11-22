#include <bits/stdc++.h>
class Soltuion{
    public:
    std::vector<int> productExceptSelf(std::vector<int> &nums){
        int data_count = nums.size(), product = 1 , count = 0  ;
        std::vector<int> answer (data_count,0);
        
        for(int i = 0 ; i <data_count ; i ++){
            if(nums[i]==0){count++;continue;}
            product *= nums[i];
        }
        for(int i = 0 ; i < data_count ; i ++){
            if(count==0){
                answer[i]=product/nums[i];
            }
            else if(count==1){
                if(nums[i]==0){
                    answer[i]=product;
                }
            }
            if(count>1){
                break;
            }
        }
        return answer;
    }
};

int main(){
    int data_count , data;
    std::vector<int> nums;
    Soltuion sol;
    std::cin>>data_count;
    for(int i = 0 ; i < data_count ; i ++){
      std::cin>>data;
      nums.emplace_back(data);
    }
    std::vector<int> answer = sol.productExceptSelf(nums);
    for(auto i :answer){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
}