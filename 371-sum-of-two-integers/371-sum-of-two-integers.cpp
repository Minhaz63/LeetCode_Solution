class Solution {
public:
    int getSum(int a, int b) {
        if (b == 0)
        return a;
        
        unsigned c;
        
        while(b!=0){
            c=a&b;    // find the carry
            a = a^b;  // find sum without carry
            b = c<<1; // left shift carry so that we can add the carry with next bit
        }
        
       
        return a;
        
    }
};