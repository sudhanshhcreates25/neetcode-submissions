class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buyprice=INT_MAX;
        int profit=0;
        
        for(auto price:prices){
            buyprice=min(buyprice,price);
            profit=max(profit,price-buyprice);
        }
        return profit;
    }
};
