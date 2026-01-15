#include"utils.h"
#include<bits/stdc++.h>

using namespace std;
int maxElem(vector<int> &nums, int prevMax){
  int currMax = INT_MIN;
  for(auto i : nums){
    if(currMax < i && i < prevMax){
      currMax = i;
    }
  }
  return currMax;
}
int main(){
  vector<int>nums = {1,3,23,4,21,45};
  int maxi = maxElem(nums, INT_MAX);
  int secondMax = maxElem(nums, maxi);
  display(nums);
  cout<<"Second Largest Number is: " << secondMax << endl;
  return 0;
}
