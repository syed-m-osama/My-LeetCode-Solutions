class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
    if(arr.size() == 0) return 0;
    unordered_set<int> res({arr[0]});
    int out = 0;
    int count = 0;
    int n = arr.size();
    for(int i = 1; i<n;i++){
        res.insert(arr[i]);
    }
    for(int j = 0;j<n;j++){
            if(res.find(arr[j]-1) == res.end()){
                int k =1;
                count = 0;
                while(true){
                    count++;
                    if(res.find(arr[j]+k) == res.end()){
                        break;
                    }
                    k++;
                }
                out = max(out,count);
            }
        }
    
        
   return out;
        
    }
};