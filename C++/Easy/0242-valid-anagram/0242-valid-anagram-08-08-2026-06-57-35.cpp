class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        int i;
        for(i = 0 ; i < s.size() ; i++){
            int ch_s = s[i]; // stores the ASCII of iterated value
            arr[abs('a' - ch_s)]++;   // maps frequencies
        }
        for(i = 0 ; i < t.size() ; i++){
            int ch_t = t[i];
            arr[abs('a' - ch_t)]--;
        }
        for(i = 0; i < 26 ; i++) {
            if(arr[i] != 0){
                return false;
                break;
            }
        }
        return true;
    }
};

/*
    ways to solve:
    1. 1 hash map (key -> elemt and val -> freq ) - do this for str1 then in case of str2 subtract freq in hash map and atlast see if hash map has 0 freq for all key -> true else -> false
    2. 2 freq arrays 1 for each string freq1 = maps str1 freq elemt freq2 = maps freq 2 freq elemt compare both freq maps if equal -> true else -> false
    3. we can also use sorting to sort both strings and then compare if the strings are equal or not and return values accordingly
*/