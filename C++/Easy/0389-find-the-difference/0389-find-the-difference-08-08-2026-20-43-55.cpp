class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26] = {0};
        int i;
        for(i = 0 ; i < s.size() ; i++){
            int ch_s = s[i];
            arr[abs('a' - ch_s)]++;
        }
        for(i = 0 ; i < t.size() ; i++){
            int ch_t = t[i];
            arr[abs('a' - ch_t)]--;
        }
        for(i = 0; i < 26 ; i++) {
            if(arr[i] != 0){
                return 'a' + i;
            }
        }
        return {};
    }
};