class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> v;
        
        v.push_back(0);
        for(int i=1;i<=n;i++){
            int val=i/2;
            v.push_back(v[val]+i%2);
        }
        return v;
    }
};