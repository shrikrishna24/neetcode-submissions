class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result = 0;
        int left=0;
        int right = heights.size()-1;
        while(left<right){

            int height = min(heights[left], heights[right]);
            
            result = max(result, (right - left) * height);
    
            if(height == heights[left]) left++;
            if(height == heights[right]) right--;
            
        }

        return result;
    }
};
