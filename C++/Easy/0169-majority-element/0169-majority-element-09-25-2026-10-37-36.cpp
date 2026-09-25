class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int,int> map_Elemt;
        for(int i = 0 ; i < nums.size() ; i++){
            map_Elemt[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(map_Elemt[nums[i]] > nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    }
};