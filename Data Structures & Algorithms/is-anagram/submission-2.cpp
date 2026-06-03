class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.size() != t.size()) return false;

        map<char, int> m, m2;

        for (char ch : s)
            m[ch]++;

        for (char ch : t)
            m2[ch]++;

        return m == m2;
    }
};
