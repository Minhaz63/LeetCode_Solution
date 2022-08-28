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
    vector<int> v;
    void travaseVal(TreeNode* root){
        if(root==NULL)
            return;
        travaseVal(root->left);
        v.push_back(root->val);
        travaseVal(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
       if(root==NULL)
           return false;
        travaseVal(root);
        sort(v.begin(),v.end());
        int s=0;
        int e=v.size()-1;
        
        while(s<e){
            if(v[s]+v[e]<k)
                s++;
            else if(v[s]+v[e]>k)
                e--;
            else
                return true;
        }
        return false;
    }
};