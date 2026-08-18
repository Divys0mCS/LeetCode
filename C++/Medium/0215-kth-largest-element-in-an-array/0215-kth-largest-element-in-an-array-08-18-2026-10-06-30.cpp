//                                               Approach 1
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int> maxHeap;
//         int ans;    
//         int i;
//         for(i = 0 ; i < nums.size() ; i++){
//             maxHeap.push(nums[i]);
//         }
//         while(k != 0){
//             ans = maxHeap.top();
//             maxHeap.pop();
//             k--;
//         }
//         return ans;
//     }
// };

//                                               Approach 2


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap(nums.begin(),nums.end());
        for(int i = 0 ; i < k-1 ; i++){
            maxHeap.pop();
        }
        return maxHeap.top();
    }
};