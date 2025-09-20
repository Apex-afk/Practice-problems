#include <iostream>
#include <vector>
using namespace std;

int Brute(vector<int> nums)
{
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;
        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
    return -1;
}
int Optimized(vector<int> nums)
{
    int n = nums.size();
    int freq = 1, ans = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }

    return ans;
}
int Moores_algo(vector<int> nums){
    int n = nums.size();
    int freq = 0, ans =0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];

        }
        if (ans == nums[i])
        {
            freq ++;
        } else{
            freq --;
        }
        
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 2, 2, 2, 3, 3, 2, 2, 2, 6, 6, 6, 6};
    // sort(nums.begin(), nums.end());

    cout << Brute(nums) << endl;
    cout << Optimized(nums) << endl;
    cout << Moores_algo(nums) << endl;
}