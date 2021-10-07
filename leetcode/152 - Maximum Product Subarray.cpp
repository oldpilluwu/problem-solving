/*
    We keep track of min and max values at every stage.
    If there is a 0, we reset min and max to 1 and compare result with zero.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mn = 1, mx = 1, tmp, res=-999999;

        for(int i=0; i<n; ++i) {
            if(nums[i]==0){
                mn = 1;
                mx = 1;
                res=max(res, 0);
                continue;
            }
            tmp = mx;
            mx = max({mx*nums[i], mn*nums[i], nums[i]});
            mn = min({tmp*nums[i], mn*nums[i], nums[i]});
            res = max(res, mx);
        }

        return res;
    }
};