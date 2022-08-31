class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> str;
        
        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z' ||s[i]>='a'&&s[i]<='z' || s[i]>='0' &&s[i]<='9'){
                if(s[i]>='A'&&s[i]<='Z')
                    str.push_back(char(s[i]+32));
                else
                    str.push_back(s[i]);
            }
        }
       int st=0,end=str.size()-1;
        
        while(st<end){
            if(str[st]!=str[end])
                return false;
            st++;
            end--;
        }
        return true;
        
    }
};