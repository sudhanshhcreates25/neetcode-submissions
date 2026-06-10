class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m1;
        for(auto i : nums){
            m1[i]++;
        }
        vector<pair<int,int>>p1;
        for(auto i:m1){
            p1.push_back({i.second,i.first});
        }
        sort(p1.rbegin(),p1.rend());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(p1[i].second);
        }
        return ans;    
    }
};
