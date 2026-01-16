class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxsum=0;
        int cheapest=prices[0];
        int j=0;
        for(int i=1;i<n;i++){
            if(prices[i]<cheapest){
                cheapest=prices[i];
            }
            if(prices[i]-cheapest>maxsum){
                maxsum=prices[i]-cheapest;
            }
        }
    return maxsum;
    }
};
