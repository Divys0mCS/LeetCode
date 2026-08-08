class Solution {
public:
    int firstUniqChar(string s) {
        int i = 0;
        int arr[26] = {0};
        for (i = 0 ; i < s.size() ; i++){
            arr[abs('a' - s[i])]++;
        }
        for(i = 0; i < s.size(); i++){
            if(arr[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};

// [0 0 1 1 3 0 0 0 0 0 0 1 0 0 1 0 0 0 0 1 0 0 0 0 0 0]-> freq mapping
//  a b c d e f g h i j k l m n o p q r s t u v w x y z 
//      4 6 2             1     5         3             -> seq of occurence