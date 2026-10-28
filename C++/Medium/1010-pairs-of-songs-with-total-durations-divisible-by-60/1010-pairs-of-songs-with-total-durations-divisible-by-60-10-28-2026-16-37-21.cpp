class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n = time.size();
        vector<int> rem(60,0);
        int count = 0;
        for(int i:time){
            int obs = i%60;
            int need = (60-obs)%60;
            count += rem[need];
            rem[obs]++;
        }
        return count;
    }
};