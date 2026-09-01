class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> result(nums.size() , 1);
        int i;
        int left = 1;
        for(i = 0 ; i < nums.size() ; i++){
            result[i] = left;
            left *= nums[i];
        }
        int right = 1;
        for(i = nums.size()-1 ; i >= 0 ; i--){
            result[i] *= right;
            right *= nums[i];
        }
        return result;
    }
};