class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>dp(n+1,0);
        if(n==0)
        {
            return 0;
        }

        int minPrice=prices[0];
        for(int i=1;i<n;i++)
        {
            minPrice=min(minPrice,prices[i]);
            dp[i]=max(dp[i-1],prices[i]-minPrice);
        }
        return dp[n-1];
    }
};
