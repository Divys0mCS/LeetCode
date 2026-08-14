class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> first;
        unordered_map<int, int> last;
        int max = 0;
        for(int i = 0; i < nums.size(); i++) {
            mp1[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++) {
            if(mp1[nums[i]] > max) {
                max = mp1[nums[i]];
            }
        }
        for(int i = 0; i < nums.size(); i++) {
            if(first.find(nums[i]) == first.end()) {
                first[nums[i]] = i;
            }
            last[nums[i]] = i;
        }
        int answer = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            if(mp1[nums[i]] == max) {
                int length = last[nums[i]] - first[nums[i]] + 1;
                if(length < answer) {
                    answer = length;
                }
            }
        }
        return answer;
    }
};