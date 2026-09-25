class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        std::unordered_map<int,int> map_Elemt;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++){
            map_Elemt[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(map_Elemt[nums[i]] > nums.size()/3){
                ans.push_back(nums[i]);
                map_Elemt[nums[i]] = 0;
            }
        }
        return ans;
    }
};