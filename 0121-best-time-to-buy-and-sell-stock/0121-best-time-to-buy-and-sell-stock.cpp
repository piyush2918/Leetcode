class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int maxi = INT_MIN;

        for(int i=0; i<n ;i++){
            int cost = prices[i]-mini;
            maxi = max(maxi,cost);
            mini = min(mini,prices[i]);
        }
        if(maxi<0){
            return 0;
        }
        return maxi;
    }
};