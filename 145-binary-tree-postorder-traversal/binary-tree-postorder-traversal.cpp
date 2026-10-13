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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>p;
        if(root==NULL){
            return p;
        }
        stack<TreeNode*>stk1,stk2;
        stk1.push(root);
        while(!stk1.empty()){
            TreeNode* temp=stk1.top();
            stk1.pop();
            stk2.push(temp);
            if(temp->left!=NULL){
                stk1.push(temp->left);
            }
            if(temp->right!=NULL){
                stk1.push(temp->right);
            }
        }
        while(!stk2.empty()){
            p.push_back(stk2.top()->val);
            stk2.pop();
        }
        return p;
    }
};