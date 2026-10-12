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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>l;
        if(root==NULL){
            return l;
        }
        queue<TreeNode*>q;
        q.push(root);
        vector<int>r;
        int c=0;
        int size=0;
        while(!q.empty()){
            size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                r.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            l.push_back(r);
            r.clear();
        }
        return l;
    }
};