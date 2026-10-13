class Solution {
public:
    bool isAnagram(string s, string t) {
        int ns = s.length();
        int nt = t.length();

        if(ns != nt) return false;
        vector<int> counter(26, 0);

        for(int i=0; i<nt; i++){
            counter[s[i]-'a']--;
            counter[t[i]-'a']++; 
        }

        for(int i=0; i<26; i++){
            if(counter[i] != 0) return false;
        }

        return true;
    }
};
