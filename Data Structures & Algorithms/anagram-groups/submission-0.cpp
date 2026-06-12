class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>m;
        vector<vector<string>>r;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(strs[i]);
        }
        for(auto i: m){
            r.push_back(i.second);
        }
        
    return r;
    }
};
