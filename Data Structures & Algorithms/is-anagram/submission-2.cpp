class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map <char, int> smpp;
        for(int i=0; i<s.size(); i++){
            smpp[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            if(smpp[t[i]] > 0 )smpp[t[i]]--;
            else return false;
        }
        return true;
    }
};
