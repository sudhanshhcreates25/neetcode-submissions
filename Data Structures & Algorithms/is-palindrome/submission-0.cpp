class Solution {
public:
    bool isPalindrome(string s) {
        string t;

for(char c : s) {
    if(isalnum(c)) {
        t += tolower(c);
    }
}
    string str=t;
    reverse(t.begin(),t.end());
    if(t==str) return true;
    else{
        return false;
    }
    }
};
