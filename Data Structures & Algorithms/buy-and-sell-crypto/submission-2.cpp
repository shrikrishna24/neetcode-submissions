class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0) return 0;

        int start =0;
        int end = 1;

        int output = 0;

        while(end<prices.size()){

            if(prices[start]<prices[end]){
                output = max(output, (prices[end] - prices[start]));
            }else{
                start = end;
            }

            end++;
        }

        return output;
    }
};
