class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(),n2 = s2.size();
        if(n1>n2) return false;
        unordered_map<char,int> str1,str2;
        for(int i=0; i<n1; i++){
            str1[s1[i]]++;
            str2[s2[i]]++;
        }
        int left = 0, right = n1-1;
        while(right < n2){
            if(str1 == str2) return true;
            else{
                str2[s2[left]]--;
                if(str2[s2[left]] == 0) str2.erase(s2[left]);
                left++;
                right++;
                if(right < n2) str2[s2[right]]++;
            }
        }
        return false;
    }
};
