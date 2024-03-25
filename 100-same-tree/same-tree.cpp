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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if((p == nullptr)&&(q == nullptr)) return true;
        else if((p!=nullptr)&&(q!=nullptr))
        {
            if(p->val == q->val)            
            {
                bool r = isSameTree(q->right, p->right);
                bool l = isSameTree(q->left, p->left);
                if((!r)||(!l)) 
                    return false;
                else 
                    return true;
            }
        }
        return false;
    }
};