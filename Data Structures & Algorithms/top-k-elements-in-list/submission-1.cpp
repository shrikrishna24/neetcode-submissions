class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        vector<pair<int, int>> temp(freq.begin(), freq.end());

        sort(temp.begin(), temp.end(),
             [](pair<int, int>& a, pair<int, int>& b) { return a.second > b.second; });

        vector<int> res;

        for (int i = 0; i < k; i++) {
            res.push_back(temp[i].first);
        }

        return res;
    }
};
