class Solution {
public:
    int maxProfit(vector<int>& price) {
        int maxi=price[0];
        int profit=0;
        for(int i =1 ; i<price.size();i++){
            if(price[i]<maxi){
                maxi=price[i];
            }
            profit=max(profit, price[i]-maxi);
        }
        return profit;
    }
};