class Solution {
public:
    bool isPalindrome(int x) {
        long long int p = 0,copy;
        copy = x;
        if(x < 0){
            return false;
        }
        while(x != 0){
            p = p * 10 + (x%10);
            x /= 10 ;
        }
        if(p == copy){
            return true;
        }
        else{
            return false;
        }
    }
};