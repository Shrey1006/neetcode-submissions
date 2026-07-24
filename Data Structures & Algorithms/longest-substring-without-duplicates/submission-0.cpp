class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0, l = 0;
        unordered_set<char> mp;
        for(int r=0; r<s.size(); r++){
            while(mp.count(s[r])!=0){
                mp.erase(s[l]);
                l++;
            }
            mp.insert(s[r]);
            ans = max(ans, r-l+1);
        }
        return ans;
    }
};
