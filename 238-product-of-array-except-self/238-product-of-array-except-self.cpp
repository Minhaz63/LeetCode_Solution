class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
       vector<int> ans;
        int n=nums.size();
        int prodAll=1;
        int countZero=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
                countZero++;
            else
                prodAll*=nums[i];
            
        }
        if(countZero==0)
        {
            for(int i=0;i<n;i++){
                ans.push_back(prodAll/nums[i]);
            }
        }
        else if(countZero==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0) ans.push_back(prodAll);
                else ans.push_back(0);
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans.push_back(0);
            }
            
        }
        return ans;
    }
};