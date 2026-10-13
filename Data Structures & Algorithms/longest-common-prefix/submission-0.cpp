class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();

        string pref = "";
        for(int i=0; i<strs[0].length(); i++){
            if(strs[0][i] != strs[n-1][i])
                return pref;
            else
                pref += strs[0][i];
        }

        return pref;
    }
};