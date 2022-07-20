class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1 ;
        int mid = high / 2;
        while(high - low >= 0){
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target){
                low = mid+1;
                mid = low+ (high - low)/2;
            }
            else if(target < nums[mid]){
                high = mid-1;
                mid = (high - low)/2;
        }
        }
               return -1;
    }
};