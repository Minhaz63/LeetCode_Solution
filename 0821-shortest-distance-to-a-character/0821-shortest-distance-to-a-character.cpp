class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
       vector<int> ans;
        vector<int> ind;
        for(int i=0;i<s.length();i++){
            if(s[i]==c)
                ind.push_back(i);
        }
        for(int i=0;i<s.length();i++){
            int min=INT_MAX;
            for(int j=0;j<ind.size();j++){
                if(abs(i-ind[j])<min)
                    min=abs(i-ind[j]);
            }
            ans.push_back(min);
        }
        return ans;
    }
};