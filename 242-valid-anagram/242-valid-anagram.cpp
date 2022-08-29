class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m1;
        map<char,int> m2;
        
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        
        for(int i=0;i<s.length();i++){
            if(m1[s[i]]!=m2[s[i]])
                return false;
        }
        return true;
    }
};