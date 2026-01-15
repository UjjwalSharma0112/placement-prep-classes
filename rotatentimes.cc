#include"utils.h"
#include<bits/stdc++.h>

using namespace std;

void reverse(vector<int> &nums,int st,int en){
  while(st <= en){
    swap(nums[st], nums[en]);
    st++;
    en--;
  }
  return;

}
int main(){
  vector<int>nums = {1,3,3,41,24,54};
  int d = 20;

  display(nums);
  cout << "Rotating "<< d <<"times" << endl;
  int n = nums.size();
  d = d % n;

  reverse(nums, 0, d - 1); 
  reverse(nums, d , n - 1);
  reverse(nums, 0 , n - 1);
  
  display(nums);
  return 0;
  
}
