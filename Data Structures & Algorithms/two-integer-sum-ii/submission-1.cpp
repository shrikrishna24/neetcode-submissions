class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int j=numbers.size()-1;


        while(l!=j){
            while((numbers[l] + numbers[j]) >  target){
                j--;
            }

            if(numbers[l] + numbers[j] == target){
                return {l+1, j+1};
            }

            l++;
        }

        return {0};
    }
};
