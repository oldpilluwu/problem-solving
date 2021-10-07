/* Kadane's Algorithm. We use greedy method here. At every step of iteration,
we compare the number at current index and the prefix value from previous steps and take the maximum value.
That means, if we discard the prefix if it does not contribute to the max sub array.
*/

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