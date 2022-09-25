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
    vector<vector<int>> ans;
    void dfs(TreeNode* root,int curSum,vector<int>& path){
        if(root==NULL) return;
        
        curSum-=root->val;
        path.push_back(root->val);
        
        if(root->left==NULL && root->right==NULL && curSum==0)
            ans.push_back(path);
        else{
            dfs(root->left,curSum,path);
            dfs(root->right,curSum,path);
        }
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> path;
        dfs(root,targetSum,path);
        return ans;
        
        
    }
};