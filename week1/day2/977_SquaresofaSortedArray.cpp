//Squares of a Sorted Array | [977](https://leetcode.com/problems/squares-of-a-sorted-array/) | Sorting + Two Pointers |

//solution

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> result(n);
        
//         int left = 0;           
//         int right = n - 1;      
//         int pos = n - 1;        

//         while (left <= right) {
//             int leftSq = nums[left] * nums[left];
//             int rightSq = nums[right] * nums[right];

//             if (leftSq > rightSq) {
//                 result[pos] = leftSq;
//                 left++;
//             } else {
//                 result[pos] = rightSq;
//                 right--;
//             }
//             pos--;
//         }

//         return result;
//     }
// };