class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> need(26, 0);
        vector<int> window(26, 0);
        int n = s1.size();
        
        for(auto x:s1){
            need[x -'a']++;
        }

        for(int i=0;i<s2.size();i++){
            window[s2[i]-'a']++;

            if(i>=s1.size()){
                window[s2[i-n]-'a']--;
            }

            if(window == need) return true;
        }

        return false;
    }
};
