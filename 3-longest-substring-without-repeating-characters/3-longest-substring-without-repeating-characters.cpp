class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        string val = "";
        int len = 0;
        int result = 0;
        int index = 0;
        while(index<s.size()){
            if(val.empty() || val.find(s[index]) == string::npos){
                val += s[right];
                right++;
                len++;
                //cout<<"if "<<val<<" "<<len<<endl;
            }
            else{
                left = val.find(s[index]) + 1;
                val.erase(0,left);
                val += s[right];
                right++;
                len = val.size();
                //cout<<"else "<<val<<" "<<len<<endl;
            }
            if(len > result) result = len;
            index++;
        }
        return result;
        
    }
};