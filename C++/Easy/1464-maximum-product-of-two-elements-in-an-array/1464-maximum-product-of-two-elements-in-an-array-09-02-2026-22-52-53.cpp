class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return (nums[n - 1] - 1) * (nums[n - 2] - 1);
    }
};

// Sort vector -> from last of vector pick up 2 elements -> Perform (nums[i] - 1) * (nums[j] - 1)