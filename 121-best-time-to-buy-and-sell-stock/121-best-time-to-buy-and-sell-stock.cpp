class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int minival=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minival=min(prices[i],minival);
            maxi=max(prices[i]-minival,maxi);
        }
        return maxi;
    }
};