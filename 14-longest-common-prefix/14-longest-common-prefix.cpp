class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {


        string sub="";
        string sub2="";
        int flag=0;
        for(int i=0;i<strs[0].length();i++){
            sub2=sub2+strs[0][i];
            char s=strs[0][i];
            //cout<<"Sub2: "<<sub2<<endl;
            for(int j=1;j<strs.size();j++){
              if(s!=strs[j][i]){
                flag=1;
                break;
              }
            }
            if(flag==1)
                break;
            sub=sub2;
        }
        return sub;
    }
};