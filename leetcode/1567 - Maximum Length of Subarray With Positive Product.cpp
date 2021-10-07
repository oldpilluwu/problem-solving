/*
    Split array on every 0.
    We keep track of neg and pos, first and last negative numbers at every stage.
    If negative number is even, answer is the length. Else, we either remove the first negative or last negative number from the array.
    If there is a 0, we reset neg and pos to 0.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int pos = 0;
        int neg = 0;
        int first = -1;
        int last = -1;
        int start = 0;

        for(int i = 0; i<n; ++i) {
            if(nums[i] == 0) {
                pos = 0;
                neg = 0;
                start = i;
                first = -1;
                last = -1;
                continue;
            }
            if(nums[i] > 0) pos++;
            else{
                neg++;
                if(neg == 1) first = i;
                last = i;
            }

            if(neg%2==0) ans = max(ans, neg+pos);
            else ans = max({ans, i-first, last-start-1});
        }

        return ans;
    }
};