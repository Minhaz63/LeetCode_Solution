class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<3)
            return 0;
        int ans=0;
        int s=height.size();
        int  lm[s];
        int  rm[s];
        int lem=0;
        for(int i=0;i<height.size();i++){
            if(i==0){
                lm[i]=0;
                lem=height[0];
            }

            else{
                if(lem<height[i])
                {
                    lem=height[i];
                    lm[i]=lem;
                }
                else
                   lm[i]=lem;
            }
        }
        lem=0;
        for(int i=height.size()-1;i>=0;i--){
            if(i==height.size()-1) {rm[i]=lem;lem=height[i];}
            else{
                if(lem<height[i])
                {
                    lem=height[i];
                    rm[i]=lem;
                }
                else
                    rm[i]=lem;
            }
        }
        
        
        for(int i=1;i<height.size()-1;i++){
            int maxLeft=lm[i];
            int maxRight=rm[i];
            
            int maxi=min(maxLeft,maxRight);
            if(maxi>height[i])
                ans+=maxi-height[i];
            
        }
        return ans;
    }
};