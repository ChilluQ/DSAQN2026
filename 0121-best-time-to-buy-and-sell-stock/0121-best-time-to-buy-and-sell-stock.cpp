class Solution {
public:
    int maxProfit(vector<int>& price) {
        int low=price[0];
        int profit=0;
        for(int i = 1 ; i<price.size();i++){
            if(low>price[i]){
                low=price[i];
            }
            profit=max(profit,price[i]-low);
        }
        return profit;
    }
};