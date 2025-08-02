class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false ; 
        vector<int>mp1(256,0);
        vector<int>mp2(256,0);

        for(int i = 0 ; i<s.size(); i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        if(mp1 == mp2) return true;
        return false;
    }
};