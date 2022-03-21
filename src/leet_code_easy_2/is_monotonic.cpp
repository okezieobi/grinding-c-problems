/*
An array is monotonic if it is either monotone increasing or monotone decreasing.
An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j].
An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].

Given an integer array nums, return true if the given array is monotonic, or false otherwise.

 

Example 1:
Input: nums = [1,2,2,3]
Output: true

Example 2:
Input: nums = [6,5,4,4]
Output: true

Example 3:
Input: nums = [1,3,2]
Output: false

Constraints:
1 <= nums.length <= 105
-105 <= nums[i] <= 105
*/

#include <bits/stdc++.h>

using namespace std;
 
 class Solution {
     public:
      bool isMonotonic(vector<int>& nums) {
          int count_asc_monotonic = 1;
          int count_desc_monotonic = 1;
          for (int i = 0; i < nums.size() - 1; i++) {
              if (nums[i] < nums[i + 1])
                  count_asc_monotonic++;
              else if (nums[i] > nums[i + 1])
                count_desc_monotonic++;
              else {
                  count_asc_monotonic++;
                  count_desc_monotonic++;
              }
          }
          if (nums.size() == count_asc_monotonic || nums.size() == count_desc_monotonic)
              return true;
          return false;
      }
 };
