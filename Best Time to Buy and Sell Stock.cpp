class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy = 0;
        buy = prices[0];
        int profit = 0;
        for(int i = 0;i<n;i++)
        {
            if ( prices[i] < buy ){
                buy = prices[i];
            }
            if( prices[i] > buy ){
                profit = max( profit , prices[i] - buy );
            }
        }
        return profit;
    }
};
