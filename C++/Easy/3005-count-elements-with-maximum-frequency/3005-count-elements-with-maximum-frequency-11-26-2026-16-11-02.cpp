class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max =INT_MIN;
        int ans = 0;
        unordered_map<int,int> freqMp;
        for(int i = 0 ; i < nums.size() ; i++){
            freqMp[nums[i]]++;
        }
        for(auto i : freqMp){
            if(i.second > max){
                max = i.second;
            }
        }
        for(auto i : freqMp){
            if(i.second == max){
                ans+= max;
            }
        }
        return ans;
    }
};