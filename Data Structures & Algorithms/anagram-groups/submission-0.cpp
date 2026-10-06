class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n =strs.size();
        vector<vector<string>> res;
        map<vector<char>, vector<string>> mpp;

        for(int i=0; i<n; i++){
            vector<char> chararr(26,0);
            for(auto it: strs[i]){
                chararr[it-'a']++;
            }
            mpp[chararr].push_back(strs[i]);
        }
        for(auto it: mpp){
            res.push_back(it.second);
        }
        return res;
    }
};
