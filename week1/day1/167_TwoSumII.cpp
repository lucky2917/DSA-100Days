// LeetCode #167 – Two Sum II: Input Array Is Sorted
// Problem Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Topic: Arrays | Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int left = 0, right = numbers.size() - 1;

//         while (left < right) {
//             int sum = numbers[left] + numbers[right];

//             if (sum < target)
//                 left++;
//             else if (sum > target)
//                 right--;
//             else
//                 return {left + 1, right + 1};
//         }
//         return {};
//     }
// };