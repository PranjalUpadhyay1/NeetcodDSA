#include <bits/stdc++.h>
class Solution{
  public: 
  int calPoints(std::vector<std::string> &operations){
    int data_count = operations.size() , answer=0 , temp;
    std::stack<int> check;
    for(int i = 0 ; i < data_count ; i ++){
      if(operations[i][0]>='0' && operations[i][0]<='9'||operations[i][0]=='-'){
        int num = stoi(operations[i]);
        answer+=num; check.emplace(num);;
      }
      else{
        if(operations[i][0]=='C'){
          answer-=check.top();
          check.pop();
        }
        else if(operations[i][0]=='D'){
          temp = 2*check.top();
          answer+=(temp);check.emplace(temp);
        }
        else{
          temp =check.top();check.pop();
          int temp2= temp + check.top();
          check.emplace(temp); check.emplace(temp2); answer+=temp2;
        }
        
      }
    }
    return answer;
  }
};
int main(){
  std::vector<std::string> operations;
  int data_count ;
  std::cin>>data_count;
  for(int i = 0 ; i < data_count ; i ++){
    std::string s ;
    std::cin>>s;
    operations.emplace_back(s);
  }
  Solution sol;
  std::cout << sol.calPoints(operations);
}