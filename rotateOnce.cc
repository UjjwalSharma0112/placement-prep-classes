#include"utils.h"

using namespace std;

int main(){
  vector<int> nums = {2,32,12,14,1,23};

  display(nums);
  int temp = nums[0];
  for(int i = 1 ; i< nums.size() ; i++){
    nums[i - 1] = nums[i];
  }
  nums[nums.size() - 1] = temp;
  display(nums);
  return 0;
}
