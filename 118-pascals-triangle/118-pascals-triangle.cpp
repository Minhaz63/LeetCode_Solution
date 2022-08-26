class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        
        vector<int> prev;
        
        for(int i=0;i<numRows;i++){
            vector<int>k(i+1);
            for(int j=0;j<=i;j++){
                if(j==0||j==i)
                    k[j]=1;
                else{
                    k[j]=prev[j]+prev[j-1];
                }
                   
                
            } 
            v.push_back(k);
            prev=k;
        }
        return v;
    }
};