#include<bits/stdc++.h>
#include"utils.h"
using namespace std;
int main(){

  vector<int> nums = {1,2,3,3,4,5,6,6,8,9};
  display(nums);
  int j = 0 , i = 1, n = nums.size();
  while(i < n && j < i){
    while(nums[j] == nums[i]){
      i++;
    }
    swap(nums[i], nums[j+1]);
    i++,j++;
  }

  display(nums);
 return 0;
}
