class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;

        int freq_s[26] = {0};
        int freq_t[26] = {0};
        
        for(auto x:s){
            freq_s[x - 'a']++;
        }

        for(auto x:t){
            freq_t[x - 'a']++;
        }

        for(int i=0;i<26;i++){
            if (freq_s[i] != freq_t[i]) {
                return false;
            }
        }

        return true;
    }
};
