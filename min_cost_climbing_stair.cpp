class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int ans[n+1];
        ans[0]=cost[0];
        ans[1]=min(cost[1],cost[1]+cost[0]);
        for(int i=2;i<n;i++){
            ans[i]=cost[i]+min(ans[i-1],ans[i-2]);
        }
        return min(ans[n-2],ans[n-1]);
    }
};
