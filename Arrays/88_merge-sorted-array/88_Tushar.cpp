#include <bits/stdc++.h>
class Solution{
    public:
    void merge(std::vector<int> &nums1 ,int m, std:: vector<int> &nums2,int n){
        int count = n,ptr = m+n-1,i=ptr-count , j = count-1;
        if(m==0){
            i=0;
        }
        while(count){
            if(ptr==j){
                nums1[ptr]=nums2[j];
                count--;j--;ptr--;
                continue;
            }
            if(nums1[i]>nums2[j]){
                nums1[ptr]=nums1[i];
                nums1[i]=0;
                if(i==0){
                    ptr--;
                }
                else{
                ptr--;i--;}
            }
            else{
                nums1[ptr]=nums2[j];
                ptr--;j--;count--;
            }
        }
       
    }
};

int main(){
    int data_count1 , data_count2,data;
    std::cin>>data_count1>> data_count2;
    std::vector<int>nums1(data_count1+data_count2,0),nums2;
    for(int i =0 ; i < data_count1 ; i++){
        std::cin>>data;
        nums1[i]=data;
    }
    for(int i = 0 ; i < data_count2; i ++){
        std::cin>>data;
        nums2.emplace_back(data);
    }
    Solution sol;
    sol.merge(nums1,data_count1,nums2,data_count2);
    for(auto i: nums1){
        std::cout<<i<<" ";
    }
}