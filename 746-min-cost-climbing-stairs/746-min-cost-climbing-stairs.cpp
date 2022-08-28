class Solution {
public:
    int rec(int i,vector<int>& cost,vector<int>& dp){
        if(i+2>cost.size()-1 || i+1>cost.size()-1)
            return cost[i];
        
        if(dp[i]!=-1) return dp[i];
        
        int jump1=cost[i] + rec(i+1,cost,dp);;
        int jump2= INT_MAX;
        if(cost.size()-1-i-1 >= 1)
        jump2=cost[i]+rec(i+2,cost,dp);
        
        
        return dp[i]=min(jump1,jump2);
       
    }
    
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
      vector<int> dp(cost.size()+1,-1);
        
        return min(rec(0,cost,dp),rec(1,cost,dp));
        
    }
};