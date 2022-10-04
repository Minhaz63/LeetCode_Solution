class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        int n=columnNumber;
        string s;
        
        while(n>26){
           n--;
            s+=('A'+n%26);
            n=n/26;
        }  
        n--;
        s+=('A'+n);
         reverse(s.begin(), s.end());
        return s;
    }
};