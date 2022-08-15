class Solution {
public:
    int lengthOfLongestSubstring(string input) {
    unordered_map<char,int> charMap;
    int len = 0;
    int res = 0;
    int left = 0;
    int right = 0;
    while(right < input.length()){
        if(charMap.find(input[right]) == charMap.end()){
            charMap[input[right]] = right;
            len++;
            right++;
        }
        else if(left > charMap[input[right]]){//was checking for right
            charMap[input[right]] = right;//was forgetting this
            len++;
            right++;
        }
        else{
            left = charMap[input[right]] + 1;
            charMap[input[right]] = right;
            right++;
            res = max(res,len);
            len =  right - left;
        }
    }
    return max(res,len); //CN
        
        
//         int left = 0;
//         int right = 0;
//         string val = "";
//         int len = 0;
//         int result = 0;
//         int index = 0;
//         while(index<s.size()){
//             if(val.empty() || val.find(s[index]) == string::npos){
//                 val += s[right];
//                 right++;
//                 len++;
//                 //cout<<"if "<<val<<" "<<len<<endl;
//             }
//             else{
//                 left = val.find(s[index]) + 1;
//                 val.erase(0,left);
//                 val += s[right];
//                 right++;
//                 len = val.size();
//                 //cout<<"else "<<val<<" "<<len<<endl;
//             }
//             if(len > result) result = len;
//             index++;
//         }
//         return result;  
    }
};