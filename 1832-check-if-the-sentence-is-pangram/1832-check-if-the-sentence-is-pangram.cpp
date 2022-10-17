class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st (sentence.begin(),sentence.end());
        char alpha = 'a';
        for(auto i: st){
            if(i == alpha) alpha++;
            else return false;
        }
        return alpha == '{'?true:false;
    }
};