class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int profit=0,cost=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {  if(prices[i]<cost)
        {
            cost=prices[i]; // finding the minimum value;
        }
            
            if(prices[i]-cost>profit)
            {
                profit=prices[i]-cost;
            }
        }
        return profit;
    }
};