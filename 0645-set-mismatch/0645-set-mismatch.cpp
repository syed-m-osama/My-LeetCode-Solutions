class Solution {
public:        
    vector<int> findErrorNums(vector<int>& nums) {
        int miss = 0;
        int repeat = 0;
        int corr = 0;
        unordered_set<int> set;
        for(int i=0; i<nums.size(); i++){
            corr = corr ^ (i+1);
            if(set.find(nums[i]) != set.end()) repeat = nums[i];
            else set.insert(nums[i]);
        }
        for(auto i:set){
            corr = corr ^ i;
        }
        return vector<int> ({repeat,corr});
    }
};