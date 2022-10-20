class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        vector<string> ans;
        while(k--){
            string str="";
            int c=0;
            for(auto x:m){
                if(x.second>c){
                    c=x.second;
                    str=x.first;
                }
                
            }ans.push_back(str);
                m.erase(str);
        }
        return ans;
    }
};