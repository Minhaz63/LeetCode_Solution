class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        stack<int> s;
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            int val=digits[i]+carry;
            if(val>=10){
               s.push(val%10);  
                carry=1;
            }
            else
            {
                s.push(val);
                carry=0;
            }
               
            
                
        }
        if(carry==1)
            s.push(carry);
         vector<int> v;
        while(!s.empty())
        {
          v.push_back(s.top());
            s.pop();
        }
        return v;
    }
};