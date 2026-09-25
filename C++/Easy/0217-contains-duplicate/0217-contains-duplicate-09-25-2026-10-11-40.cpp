class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> map_Elemt;
        for(int i = 0 ; i < nums.size() ; i++){
            map_Elemt[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(map_Elemt[nums[i]] > 1){
                return true;
            }
        }
        return false;
    }
};