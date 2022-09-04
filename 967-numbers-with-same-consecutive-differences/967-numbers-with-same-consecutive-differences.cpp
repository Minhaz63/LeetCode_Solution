class Solution {
public:
    void dfs(int num,int n,int k,vector<int>& ans){
        if(n==0){
            ans.push_back(num);
            return;
        }
        int ld=num%10;
        if(ld>=k) dfs(num*10+ld-k,n-1,k,ans);
        if(k!=0 && ld+k<10) dfs(num*10+ld+k,n-1,k,ans);

    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        if(n==0) ans.push_back(0);
        for(int i=1;i<=9;i++){
            dfs(i,n-1,k,ans);
        }
        
        return ans;
    }
};