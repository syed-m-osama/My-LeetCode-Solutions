class Solution {
public:
    string breakPalindrome(string palindrome) {
        int len = palindrome.length();
        if(len == 1) return "";
        for(int i = 0; i< len/2; i++){
            if(palindrome[i] != 'a' && len/2 != i){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[len -1] = 'b';
        return palindrome;
    }
};