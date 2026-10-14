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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>l;
        if(root==NULL){
            return l;
        }
        queue<TreeNode*>q;
        TreeNode* temp=root;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            double avg=0;
            for(int i=0;i<size;i++){
                temp=q.front();
                q.pop();
                avg+=temp->val;
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            l.push_back(avg/size);
        }
        return l;
    }
};