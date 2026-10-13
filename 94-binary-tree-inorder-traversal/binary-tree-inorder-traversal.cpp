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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>r;
        if(root==NULL){
            return r;
        }
        stack<TreeNode*>stk;
        TreeNode* temp=root;
        while(true){
            if(temp!=NULL){
                stk.push(temp);
                temp=temp->left;
            }
            else{
                if(stk.empty()){
                    break;
                }
                temp=stk.top();
                stk.pop();
                r.push_back(temp->val);
                temp=temp->right;
            }
        }
        return r;
    }
};