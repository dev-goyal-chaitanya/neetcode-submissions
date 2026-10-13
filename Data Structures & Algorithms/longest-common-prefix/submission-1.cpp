class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();

    int min_chars = min(strs[0].length(), strs[n-1].length());

        string pref = "";
        for(int i=0; i<min_chars; i++){
            if(strs[0][i] != strs[n-1][i])
                return pref;
            else
                pref += strs[0][i];
        }

        return pref;
    }
};