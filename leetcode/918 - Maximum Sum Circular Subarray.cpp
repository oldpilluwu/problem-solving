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