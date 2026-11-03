class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(),nums.end());
        int max = nums[nums.size()-1];
        for(int i = 0 ; i < nums.size() ; i++){
            count = count + (max - nums[i]);
        }
        return count;
    }
};