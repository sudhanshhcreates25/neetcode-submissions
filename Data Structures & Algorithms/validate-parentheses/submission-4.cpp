class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;
        for(char ch: s){
            if(ch=='{'||ch=='('||ch=='['){
                ans.push(ch);
            }
            else{
                if(ans.empty()) return false;
                if(ch=='}'&&ans.top()!='{'||ch==']'&&ans.top()!='['||ch==')'&&ans.top()!='('){
                    return false;
                }
                ans.pop();
            }
        }
        return ans.empty();
    }
};
