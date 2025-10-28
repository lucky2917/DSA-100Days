// LeetCode #1480 – Running Sum of 1D Array
// Problem Link: https://leetcode.com/problems/running-sum-of-1d-array/
// Topic: Arrays | Prefix Sum
// Approach: Compute cumulative prefix sum iteratively
// Time Complexity: O(n)
// Space Complexity: O(n) (output array)

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> prefix(n);
//         prefix[0] = nums[0];

//         for (int i = 1; i < n; i++) {
//             prefix[i] = nums[i] + prefix[i - 1];
//         }

//         return prefix;
//     }
// };