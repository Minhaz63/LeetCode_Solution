class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        long long int sum=0;
        for(int i=0;i<n;i++)
            sum=sum+nums[i];
        
       long long int mini=INT_MAX;
        long long int ans = 0;
        long long int count=1;
       long long int s=0;
        for(long long int i=0;i<n-1;i++){
            s=s+nums[i];
           long long int avg=(sum-s)/(n-count);
            long long int avg2 = (s)/count;
            if(abs(avg-avg2)<mini)
            {
                mini=abs(avg-avg2);
                ans=count-1;
            }
            count++;
        }
        if((sum/n)<mini)
            return n-1;
        return ans;
    }
};