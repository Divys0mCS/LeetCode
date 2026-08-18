class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;
        int ans;    
        int i=0;
        for(i = 0 ; i < nums.size() ; i++){
            maxHeap.push(nums[i]);
        }
        while(k != 0){
            ans = maxHeap.top();
            maxHeap.pop();
            k--;
        }
        return ans;
    }
};