class Solution {
public:
    int ans(int ind,vector<int>&cost,vector<int>&dp){
        if(ind==0) return cost[0];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int take =  ans(ind-2,cost,dp)+cost[ind];
        int notake= ans(ind-1,cost,dp);
        return dp[ind]=max(take,notake);
    }
    
    int rob(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        return ans(n-1,cost,dp);
          }
};
