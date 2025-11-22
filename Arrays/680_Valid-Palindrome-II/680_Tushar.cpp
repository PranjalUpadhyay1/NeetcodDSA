#include <bits/stdc++.h>
class Solution{
  public:
  bool isPlaindrome(std::string &s , int i , int j){
      while(i<j){
          if(s[i]!=s[j]){return false;}
          i++;j--;
      }
      return true;
  }
  bool validPalindrome(std::string &s){
      int i = 0 , j = s.length()-1;
      while(i<j){
          if(s[i]!=s[j]){
            if(isPlaindrome(s,i,j-1)||isPlaindrome(s,i+1,j)){
                return true;
            }
            return false;
          }
          i++;j--;
      }
      
      return true;
  }
};
int main(){
    std::string s ;
    std::cin>>s;
    Solution sol;
    if(sol.validPalindrome(s)){
        std::cout<<"yes"<<std::endl;
    }
    else{
        std::cout<<"no"<<std::endl;
    }
}