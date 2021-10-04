#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[10005];

    int deleteAndEarn(vector<int>& nums) {
        vector<int> sum(10005, 0);
        for(int i=0; i<nums.size();++i) {
            sum[nums[i]] += nums[i];
        }

        dp[1] = sum[1];
        dp[2] = max(sum[2], sum[1]);
        
        for(int i = 3; i<10005; ++i) {
            dp[i] = max(sum[i] + dp[i-2], dp[i-1]);
        }

        return dp[10004];
    }
};