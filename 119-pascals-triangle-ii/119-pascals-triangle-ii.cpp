class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> prev;
        
        for(int i=0;i<=rowIndex;i++){
            vector<int>k(i+1);
            for(int j=0;j<=i;j++){
                if(j==0||j==i)
                    k[j]=1;
                else{
                    k[j]=prev[j]+prev[j-1];
                }
                   
                
            } 
           
            prev=k;
        }
        return prev;
    }
    
};