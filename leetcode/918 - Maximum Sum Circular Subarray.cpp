/*
    Kadane's algorithm.
    The solution is the total sum - minimum sub array sum. 
    First we calculate maxSubarray sum.
    Then we invert the sign of all values in array and calulate minimum sub array sum.
    If sum of array and minimum sum are equal return max sum.
    else return maximum value of maxSum or sum-minSum.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kadane(vector<int>& nums) {
        int mx = nums[0];
        int cur = nums[0];

        for(int i=1; i<nums.size(); ++i) {
            cur = max(nums[i], cur + nums[i]);
            mx = max(cur, mx);
        }

        return mx;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum = 0;
        
        int a = kadane(nums);

        for(int i=0; i<nums.size();++i) {
            sum += nums[i];
            nums[i] *= -1;
        }

        int b = kadane(nums)*(-1);

        if(sum == b) return a;
        else return max(a, sum-b);
    }
};