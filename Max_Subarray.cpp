#include<iostream>
#include<vector>
using namespace std;

int bruteForce (vector<int>& nums)
{
  int n = nums.size();
   int  MaxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
      int CurrSum = 0;
        for (int end = st; end < n; end++)
        {
           CurrSum += nums[end];
           MaxSum = max(CurrSum,MaxSum);
        }
        
    }
   return MaxSum;
    
}
int KadanesAlgo(vector<int>& nums){
  int n = nums.size();
  int currSum = 0, MaxSum = INT_MIN;
  for(int i = 0; i < n; i++){
    currSum += nums[i];
    MaxSum = max(currSum, MaxSum);
    
    if (currSum < 0)
    {
      currSum = 0;
    }
    
  }
  return MaxSum;
}

int main(){
  vector<int> nums = {2, -4, 5, 4, -1 ,7, 8};

  cout << bruteForce(nums) << endl;
  cout << KadanesAlgo(nums) << endl;
  return 0;
}