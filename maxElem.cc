#include"utils.h"
#include<bits/stdc++.h>

using namespace std;


int main(){
  vector<int> nums = {1,2,3,4};
  display(nums);
  int maxElem = INT_MIN;
  for(auto i : nums){
    maxElem = max(maxElem, i);
  }
  cout<< "Max Element is "<< maxElem << endl;

  return 0;
}
