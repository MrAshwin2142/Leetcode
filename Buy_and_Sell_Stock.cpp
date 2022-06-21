class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int mxp=0;
        int mn=prices[0];
        for(int i=0;i<n;i++){
            mn=min(mn,prices[i]);
            mxp=max(mxp,prices[i]-mn);
        }
        return mxp;
    }
};
