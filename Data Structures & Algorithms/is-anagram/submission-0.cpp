class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
           return false;
        unordered_map<int,int> mpps, mppt;
        for(int i=0; i<s.length(); i++){
            mpps[s[i]]++;
            mppt[t[i]]++;
        }
        return mpps==mppt;
    }
};
