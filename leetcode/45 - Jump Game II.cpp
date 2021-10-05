#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;

        int jumps = 0, l = 0, r = 0;

        while(r<n-1) {
            int far = 0;
            for(int i=0; i<=r; ++i){
                far = max(far, nums[i] + i);
            }
            l = r+1;
            r = far;
            jumps++;
        }

        return jumps;
    }
};

int main() {
    vector<int> a {7,0,9,6,9,6,1,7,9,0,1,2,9,0,3};
    Solution sol = Solution();
    cout << sol.jump(a) << endl;
}