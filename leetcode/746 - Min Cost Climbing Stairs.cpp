// Using dp, check whether 1 step or 2 step is max or not.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[1001];
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size()-1;
        dp[len] = cost[len];
        dp[len-1] = cost[len-1];

        for(int i = len-2; i>=0; --i){
            dp[i] = min(cost[i]+dp[i+1], cost[i]+dp[i+2]);
        }

        return min(dp[0], dp[1]);
    }
};