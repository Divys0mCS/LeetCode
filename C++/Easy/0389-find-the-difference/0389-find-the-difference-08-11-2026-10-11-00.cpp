class Solution {
public:
    char findTheDifference(string s, string t) {
        std::unordered_map<char , int> hashMap;
        int i;
        for(i = 0 ; i < s.size() ; i++){
            hashMap[s[i]]++;
        }
        for(i = 0 ; i < t.size() ; i++){
            if(hashMap[t[i]] == 0){
                return t[i];
            }
            hashMap[t[i]]--;
        }
        return{};
    }
};