class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;
        int count = 0;
        for(auto i: nums){
            if(i<=first) first = i;
            else if(i<=second) second = i;
            else return true;
                
        }
        return false;
        
    }
};