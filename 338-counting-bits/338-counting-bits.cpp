class Solution {
public:
    int Sumrec(int n){
        if(n==0)
            return 0;
        else{
    
            return Sumrec(n/2)+n%2;
        }
    }
        
    vector<int> countBits(int n) {
        vector <int> v;
        
        
        for(int i=0;i<=n;i++){
           int val=Sumrec(i);
            v.push_back(val);
        }
        return v;
    }
};