// LeetCode #56 – Merge Intervals
// Problem Link: https://leetcode.com/problems/merge-intervals/
// Approach: Sort intervals by start time, then merge overlapping ones
// Time Complexity: O(n log n)   (sorting dominates)
// Space Complexity: O(n)        (result vector)

// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         if (intervals.empty()) return {};
//         sort(intervals.begin(), intervals.end());

//         vector<vector<int>> merged;
//         merged.push_back(intervals[0]);

//         for (int i = 1; i < intervals.size(); i++) {
//             vector<int>& last = merged.back();
//             if (intervals[i][0] <= last[1]) {
//                 last[1] = max(last[1], intervals[i][1]);
//             } 
//             else {
//                 merged.push_back(intervals[i]);
//             }
//         }
//         return merged;
//     }
// };