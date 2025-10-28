// LeetCode #53 – Maximum Subarray
// Problem Link: https://leetcode.com/problems/maximum-subarray/
// Topic: Arrays | Dynamic Programming
// Approach: Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int currentSum = 0;
//         int maxSum = INT_MIN;

//         for (int i = 0; i < nums.size(); i++) {
//             currentSum += nums[i];
//             maxSum = max(maxSum, currentSum);

//             if (currentSum < 0)
//                 currentSum = 0;
//         }

//         return maxSum;
//     }
// };