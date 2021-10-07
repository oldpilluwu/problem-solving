/*
    Using dp. dp array keeps track of the maximum value robbed upto each index.
    We iterate over the array two times.
    First, since 0th and n-1th house is connected, we iterate from 0 to n-2.
    Second, we iterate from 1 to n-1.
    Then we return the max.
*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp1[100];
    int dp2[100];

    int rob(vector<int>& nums) {
        int len = nums.size();
        if(len==1) return nums[0];
        if(len==2) return max(nums[0], nums[1]);

        dp1[0] = nums[0];
        dp1[1] = max(nums[0], nums[1]);
        
        for(int i = 2; i<len-1; ++i) {
            dp1[i] = max(nums[i] + dp1[i-2], dp1[i-1]);
        }

        dp2[0] = 0;
        dp2[1] = nums[1];
        
        for(int i = 2; i<len; ++i) {
            dp2[i] = max(nums[i] + dp2[i-2], dp2[i-1]);
        }

        return max(dp2[len-1], dp1[len-2]);
    }
};