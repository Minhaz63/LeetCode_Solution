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
    void inOrder(TreeNode* root,int tsum,int sum,bool &ans){
        
         if(root->left == NULL && root ->right == NULL)
         {
             if(sum+ root->val== tsum)
                 ans=true;
             return;
         }   
        
        
        if(root->left != NULL)
       inOrder(root->left,tsum,sum+root->val,ans); 
        if(root->right != NULL)
        inOrder(root->right,tsum,sum+root->val,ans);
    }
        
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return false;
        bool ans=false;
        
        inOrder(root,targetSum,0,ans);
        return ans;
        
        
    }
};