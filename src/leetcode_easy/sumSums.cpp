#include <bits/stdc++.h>

using namespace std;

class Solution {
    public: 
    vector<int> twoSums(vector<int>& nums, int target) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int d = target - nums[i];
            int j = nums.at(d);
            if (j != -1 && j != i) {
                ans.push_back(i);
                ans.push_back(j);
                break;
            };
        }
        return ans;
    }
};