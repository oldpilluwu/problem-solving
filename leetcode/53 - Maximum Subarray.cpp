#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = nums[0];
        int cur = nums[0];

        for(int i=1; i<nums.size(); ++i) {
            cur = max(nums[i], cur + nums[i]);
            mx = max(cur, mx);
        }

        return mx;
    }
};