class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        set<int>ans;
        vector<int>r;
        for(auto i:nums){
            ans.insert(i);
        }
        for(auto i:ans){
            r.push_back(i);
        }
        int count=1,best=1;
        for(int i=1;i<r.size();i++){
            if(r[i]-r[i-1]==1){
                count++;
            }
            else{
                count=1;
            }
            best=max(best,count);
        }
        return best;
    }
};
