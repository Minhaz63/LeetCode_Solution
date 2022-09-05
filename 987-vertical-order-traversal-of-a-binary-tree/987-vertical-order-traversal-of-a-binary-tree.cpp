/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int,map<int,multiset<int> >> mymap;
    void dfs(TreeNode* node,int col,int row){
        if(node==NULL)
            return;
        mymap[col][row].insert(node->val);
        dfs(node->left,col-1,row+1);
        dfs(node->right,col+1,row+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0);
        vector<vector<int>> ans;
        
        
        
         for(auto m1: mymap)
        {    
            ans.push_back(vector<int>());
            for(auto m2: m1.second)
            {
                for(auto m3: m2.second)
                    ans.back().push_back(m3);
            }
        }
        return ans;
    }
};


















