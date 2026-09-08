class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i;
        int ans = nums.size();
        for(i = 0 ; i < nums.size() ; i++){
            ans ^=  nums[i] ^ i;
        }
        return ans;
    }
};