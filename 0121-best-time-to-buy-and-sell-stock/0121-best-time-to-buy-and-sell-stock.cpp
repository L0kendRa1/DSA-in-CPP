class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int min_price=prices[0];
        for(int i=0;i<=n-1;i++){
            min_price=min(min_price,prices[i]);
            int profit=prices[i]-min_price;
            ans=max(ans,profit);
        }
        return ans;
        
    }
};