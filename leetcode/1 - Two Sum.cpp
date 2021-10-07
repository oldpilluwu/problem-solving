/*
 Using HashMap. Loop through array and check if number at index i
 is present in the map.
    - if present, return i and the index stored at the Hashmap
    - if not present, then insert the complementary (target - number) in the hashmap
 */


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> map;
        
        for(int i=0; i<nums.size(); ++i) {
            if(map.find(nums[i])==map.end()) map[target-nums[i]] = i;
            else {
                res.push_back(map[nums[i]]);
                res.push_back(i);
                break;
            }
        }
        
        
        return res;
    }
};