class Solution {
public:
    //discuss - redo
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int L = 0, R = size(arr)-1;
        while (R - L >= k) 
            if (x - arr[L] <= arr[R] - x) R--;
            else L++;
        return vector<int>(begin(arr) + L, begin(arr) + R + 1);
    }
    
    
    
    
    
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
//         vector<int> result;
//         int size = arr.size();
        
//         if(x < arr[0]){
//             for(int i = 0; i<k; i++) result.push_back(arr[i]);
//             return result;
//         }
//         else if(x > arr[size-1]){
//             for(int i = size-k; i < size; i++) result.push_back(arr[i]);
//             return result;
//         }
        
//         int lo = 0;
//         int hi = size - 1;
//         int mid = (hi - lo)/2 + lo;
        
//         while(lo<hi){
//             if(arr[mid] < x){
//                 lo = mid + 1;
//                 mid = (hi - lo)/2 + lo;
//             }
//             else if(arr[mid] > x){
//                 hi = mid - 1;
//                 mid = (hi - lo)/2 + lo;
//             }
//             else{ break; }
//         }
        
//         if(hi - lo <= 1){
//             if(abs(arr[lo] - x) <= abs(x - arr[hi])){
//                 mid = lo;
//             }
//             else{
//                 mid = hi;
//             }
//         }
        
//         if(k%2 == 0){
//             int temp = k/2;
//             if(mid+temp-1 >= size){
//                 for(int i = size-k; i < size; i++) result.push_back(arr[i]);
//                 return result;
//             }
//             else if(mid+temp < 0){
//                 for(int i = 0; i<k; i++) result.push_back(arr[i]);
//                 return result;
//             }
//             for(int i = mid-temp; i< mid-temp+k; i++) result.push_back(arr[i]);
            
//         }
//         else{
//             int temp = (k - 1)/2;
//             if(mid+temp >= size){
//                 for(int i = size-k; i < size; i++) result.push_back(arr[i]);
//                 return result;
//             }
//             else if(mid-temp <= 0){
//                 for(int i = 0; i<k; i++) result.push_back(arr[i]);
//                 return result;
//             }
//             for(int i = mid-temp; i< mid-temp+k; i++) result.push_back(arr[i]);
//         }
        
        
//         return result;
        
//     }
    
};