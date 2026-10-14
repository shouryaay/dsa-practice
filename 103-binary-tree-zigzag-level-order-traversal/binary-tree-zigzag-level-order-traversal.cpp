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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>z;
        if(root==NULL){
            return z;
        }
        queue<TreeNode*>q;
        TreeNode* temp=root;
        q.push(root);
        int c=0;
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            c++;
            for(int i=0;i<size;i++){
                temp=q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            if(c%2==0){
                reverse(v.begin(),v.end());
                z.push_back(v);
            }
            else{
                z.push_back(v);
            }
        }
        return z;
    }
};