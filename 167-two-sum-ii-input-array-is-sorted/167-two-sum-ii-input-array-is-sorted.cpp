class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int s=0,e=numbers.size()-1;
        while(s<e){
            if( numbers[s]+ numbers[e]<target)
            {
                s++;
            }
            else if( numbers[s]+ numbers[e]>target){
                e--;
            }
            else{
                v.push_back(s+1);
                v.push_back(e+1);
                break;
            }
        }
       return v; 
    }
};