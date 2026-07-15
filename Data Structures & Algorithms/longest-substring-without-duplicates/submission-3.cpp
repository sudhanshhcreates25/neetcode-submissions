class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        int n=s.size();
        int max=1;
        for(int i=0;i<n;i++){
            string temp="";
            temp+=s[i];
            for(int j=i+1;j<n;j++){
                char t=s[j];
                auto it=find(temp.begin(),temp.end(),t);
                if(it!=temp.end()){
                    break;
                }
                else{
                    temp+=t;
                }
                if(temp.size()>max){
                    max=temp.size();
                }
            }
        }
        return max;
    }
};
