class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int minSum = INT_MAX;
        unordered_map<string, int> mp1;
        vector<string> ans;
        for(int i = 0; i < list1.size(); i++) {
            mp1[list1[i]] = i;
        }
        for(int i = 0; i < list2.size(); i++) {
            if(mp1.find(list2[i]) != mp1.end()) {
                int sum = i + mp1[list2[i]];
                if(sum < minSum) {
                    minSum = sum;
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if(sum == minSum) {
                    ans.push_back(list2[i]);
                }
            }
        }
        return ans;
    }
};