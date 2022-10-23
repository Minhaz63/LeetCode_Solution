class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(  m[nums[i]]==2)
                ans.push_back(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            if(!m.count(i)){
                ans.push_back(i);
                break;
            }
                
        }
        return ans;
    }
};