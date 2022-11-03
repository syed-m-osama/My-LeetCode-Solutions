class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        //dsicuss - redo
               int count[26][26] = {}; 
       int ans =0;
        
			for(auto w : words){
				int a = w[0] - 'a';
				int b = w[1] - 'a'; 

				if(count[b][a]){
					ans+= 4;          
					count[b][a]--;   // decrement the count as we found mirror word
				}else
					count[a][b]++;  //increment the current word count if we not find any mirror word
			}
        
			for(int i=0;i<26;i++){
				if(count[i][i]){
					ans+=2;
					break;
				}
			 }
      
	return ans;
         
    }
};
        
        
        
        
        
//         int len = 0;
//         vector<string> found;
//         bool sym = 0;
//         for(auto i:words){
//             string temp = "";            
//             temp += i[1];
//             temp += i[0];
//             // cout<<temp<<endl;
//             if(sym == 0 && i[0] == i[1]) {len += 2; sym = 1;}
//             else if(find(found.begin(),found.end(),temp) != found.end()) {len += 4;found.erase(find(found.begin(),found.end(),temp));}
//             else found.push_back(i);
            
//         }
//         return len;
//     }
// };