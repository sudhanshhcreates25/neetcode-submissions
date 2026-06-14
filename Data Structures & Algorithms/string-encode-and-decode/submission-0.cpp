class Solution {
public:

    string encode(vector<string>& strs) {
            string s="";
            for(auto i:strs){
                string size=to_string(i.size());
                s=s+size+"#"+i;
            }
            return s;
    }

    vector<string> decode(string s) {
           vector<string>strs;
           int i = 0;

while(i < s.size()) {

    int j = i;

    while(s[j] != '#') {
        j++;
    }

    int len = stoi(s.substr(i, j-i));

    strs.push_back(
        s.substr(j+1, len)
    );

    i = j + 1 + len;
}
                
        return strs;
    }
};
