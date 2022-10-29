class Solution 
{
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) 
    {
        vector<pair<int, int>> pairs;
        for (auto i = 0; i < plantTime.size(); ++i)
            pairs.emplace_back(growTime[i], plantTime[i]);
        
        // nice trick with reverse iterators for reverse sorting
        sort(pairs.rbegin(), pairs.rend());
        
        int c = 0, t = 0;
        for (auto[g,p] : pairs) { c += p; t = max(t, c + g); }
        
        return t;
    }
};



// class Solution {
// public:
//     static bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
//         return (a.second < b.second);
//     }
    
//     int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
//         int size = plantTime.size();
//         if(size == 1) return plantTime[0] + growTime[0];
//         vector<pair<int,int>> combine;
//         for(int i = 0; i< size; i++){
//             pair<int,int> t({growTime[i],plantTime[i]});
//             combine.push_back(t);
//         }
//         sort(combine.rbegin(),combine.rend());
//         for(auto i: combine){
//             cout<<i.first<<i.second<<endl;
//         }
//         int left = 0;
//         int right = 0;
//         for(int i = 0;i<size-1;i++){
//             if(combine[i].first == combine[i+1].first){
//                 right = i+1;
//                 continue;
//             }
//             else if(right - left > 1){
//                 sort(combine.begin()+left,combine.begin()+right+1, sortbysec);
//             }
//             else{
                
//                 left = i+1;
//             }
//         }
//         sort(combine.begin()+left,combine.begin()+right+1, sortbysec);
        
//         int check = 0;
//         int sum = 0;
//         int diff = 0;
//         for(int i = 0; i< size; i++){
//             sum += combine[i].second;
//         }

//         for(auto i: combine){
//             cout<<i.first<<i.second<<endl;
//         }
//         return sum+combine[size-1].first;
//     }
// };