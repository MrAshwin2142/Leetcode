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
    
    int ans2(int ind,vector<int>&cost,vector<int>&pp){
        if(ind==0) return cost[0];
        
        if(ind<0) return 0;
        if(pp[ind]!=-1) return pp[ind];
        int take =  ans(ind-2,cost,pp)+cost[ind];
        int notake= ans(ind-1,cost,pp);
        return pp[ind]=max(take,notake);
    }
    
    int rob(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
               vector<int> pp(n,-1);
        if(n==1) return cost[0];
        if(n==2) return max(cost[0],cost[1]);
        
        int last = ans(n-2,cost,dp);
        cost[0]=0;
        int first = ans2(n-1,cost,pp);
            return max(last,first);
          }
};
