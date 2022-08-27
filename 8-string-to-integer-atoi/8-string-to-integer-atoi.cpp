class Solution {
public:
    int myAtoi(string s) {
        long long num=0;
        int sign=1;
        bool flag=true;

        for(int i=0;i<s.length();i++){

          if(s[i]==' '&&flag){
            continue;
          }
          else if(s[i]=='-'&&flag){
                sign=-1;
                flag=false;
            }
            else if(s[i]=='+'&&flag){
                flag=false;
                sign=1;
            }
          else if(isdigit(s[i])){
            num=num*10+(s[i]-'0');
              flag=false;
          }
          else{
            break;
          }
          if(sign*num>INT_MAX)return INT_MAX;
          else if(sign*num<INT_MIN) return INT_MIN;

        }

        return num*sign;
    }
};