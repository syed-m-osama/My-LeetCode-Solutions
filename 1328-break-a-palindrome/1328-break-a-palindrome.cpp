class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length() == 1) return "";
        for(int i = 0; i< palindrome.length(); i++){
            if(palindrome[i] != 'a' && palindrome.length()/2 != i){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[palindrome.length() -1] = 'b';
        return palindrome;
    }
};