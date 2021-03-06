/*
    Using greedy. At every step, we check if that index reachable first using the previous max jump.
    we take the maximum value between max jump from precious steps and max jump from current step
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = nums[0];
        int n = nums.size();

        if(n==1) return true;

        for(int i=1; i<n; ++i) {
            if(mx<i) return false;
            mx = max(mx, i+nums[i]);
            if(mx>=n-1) return true;
        }

        return mx >= n-1;
    }
};