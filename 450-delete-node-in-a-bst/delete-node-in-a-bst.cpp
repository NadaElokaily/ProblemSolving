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
    TreeNode* maxNode(TreeNode* root){
        if(!root) return nullptr;
        TreeNode* temp = root;
        while(temp->right){
            temp = temp->right;
        }
        return temp;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;
        if(root->val == key){
            if(!root->left && !root->right){
                delete root;
                root = nullptr;
            }
            else if(root->left && !root->right){
                TreeNode* temp = root->left;
                delete root;
                root = temp;
            }
            else if(!root->left && root->right){
                TreeNode* temp = root->right;
                delete root;
                root = temp;
            }
            else{
                int maxi = maxNode(root->left)->val;
                root->val = maxi;
                root->left = deleteNode(root->left,maxi);
            }
        }
        else if(root->val > key){
            root->left = deleteNode(root->left, key);
        }
        else if(root->val < key){
            root->right = deleteNode(root->right, key);
        }
        return root;
    }
};