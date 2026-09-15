class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int i =0;
        int j=i+1;
        set<vector<int>> st;
        for(int i = 0;i<nums.size();i++){
            
            set<int> arr = {};

            for(int j = i+1 ;j<nums.size();j++){

                int k = -(nums[i]+nums[j]);

                if (arr.find(k) != arr.end()) {
                    vector<int> temp = {nums[i], k, nums[j]};

                    sort(temp.begin(), temp.end());

                    st.insert(temp);
                }

                arr.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
