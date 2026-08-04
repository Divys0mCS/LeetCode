class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> Map;

        for (int i = 0; i < nums.size(); i++) {
            Map[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int val = target - nums[i];
            if (Map.find(val) != Map.end() && Map[val] != i) {
                return {i, Map[val]};
            }
        }
        return {};
    }
};