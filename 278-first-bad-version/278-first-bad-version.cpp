// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ind=n;
        for(int i=n;i>=1;i--){
            if(isBadVersion(i)){
                ind=i;
            }
            else 
                return ind;
        }
        return ind;
    }
};