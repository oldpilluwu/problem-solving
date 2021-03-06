/*
    Using dp. dp array keeps track of the maximum value robbed upto each index.
    We take max of dp[i-1] and nums[i] + dp[i-2] for dp[i];
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[100] = {0};
    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len==1) return nums[0];
        if(len==2) return max(nums[0], nums[1]);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        
        for(int i = 2; i<len; ++i) {
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
        }

        return max(dp[len-1], dp[len-2]);
    }
};