class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mp = 0;
        int bestBuy = prices[0];

        for(int i=1 ; i<n ; i++){
            if(prices[i] > bestBuy){
                mp = max(mp,prices[i]-bestBuy);
            }
            // if(prices[i] < bestBuy){
            //     bestBuy = prices[i];
            // }
            bestBuy = min(bestBuy,prices[i]);
        }
        return mp;
    }
};
