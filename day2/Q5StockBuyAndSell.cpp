/*****************Day2 Q5**************/

//Stock Buy and Sell
//LeetCode 121


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,min=INT_MAX,max=INT_MIN;
        if(prices.size()==0)
            return 0;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
            {
                min=prices[i];
            }
            profit=abs(prices[i]-min);
            
            if(profit>max)
                max=profit;
        }
        return max;
    }
};
