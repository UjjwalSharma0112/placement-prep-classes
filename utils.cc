#include"utils.h"

void display(const std::vector<int> &nums){
  for(auto i : nums){
    std::cout << i << " ";
  }
  std::cout << std::endl;
}


std::vector<int> genArrayWDup(int size){
  srand(time(0));
  int seed = rand() % (50 + 1 - 0) + 0;
  std::vector<int>array(size);
  for(int i = 0 ; i < size ; i++){
    if(rand() % 2)
      array[i] = seed++;
    else 
      array[i] = seed;
  }
  return array;
}
