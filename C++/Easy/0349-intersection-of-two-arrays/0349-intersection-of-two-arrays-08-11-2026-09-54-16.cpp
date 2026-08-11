class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        std::unordered_map<int, int> hashMap;
        int i;
        for(i = 0 ; i < nums1.size() ; i++){
            hashMap[nums1[i]] = 1;
        }
        for(i = 0 ; i < nums2.size() ; i++){
            if(hashMap[nums2[i]] == 1){
                ans.push_back(nums2[i]);
                hashMap[nums2[i]] = 0;
            }
        }
        return ans;
    }
};