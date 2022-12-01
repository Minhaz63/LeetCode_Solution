class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int st=0;
        int e=s.length()-1;
        int stc=0,ec=0;
        while(st<e){
            if(s[st]=='a'|| s[st]=='e'|| s[st]=='i'|| s[st]=='o'|| s[st]=='u'|| s[st]=='A'|| s[st]=='E'|| s[st]=='I'|| s[st]=='O'|| s[st]=='U')
                stc++;
             if(s[e]=='a'|| s[e]=='e'|| s[e]=='i'|| s[e]=='o'|| s[e]=='u'|| s[e]=='A'|| s[e]=='E'|| s[e]=='I'|| s[e]=='O'|| s[e]=='U')
              ec++;
            
            st++;
            e--;
        }
        if(stc==ec)
            return true;
        return false;
        
    }
};