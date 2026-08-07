// class Solution {
// public:
    // bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // for(int i = 0; i < nums.size(); i++){
            // for(int j = i+1; j < nums.size() ; j++){                         BRUTEFORCE APPROACH
                // if(nums[i] == nums[j] && abs(i-j) <= k){
                    // return true;
                // }
            // }
        // }
        // return false;
    // }
// };

// Optimized Approach
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::unordered_map<int,int> map_Elemt;
        for(int i = 0 ; i < nums.size() ; i++){
            int e1 = nums[i];
            if(map_Elemt.find(e1)==map_Elemt.end()){
                map_Elemt[e1] = i;
            }
            else{
                int prev_Index = map_Elemt[e1];
                if(i - prev_Index <= k){
                    return true;
                }
                map_Elemt[e1] = i;
            }
        }
        return false;
    }
};