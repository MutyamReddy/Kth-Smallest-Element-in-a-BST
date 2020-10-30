class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int count=0;
        stack<TreeNode*>s;
        while(root||!s.empty()){
            if(root){
                s.push(root);
                root=root->left;
            }
            else{
                root=s.top();
                s.pop();
                count++;
                if(count==k) return root->val;
                root=root->right;
            }
        }
        return NULL;
    }
};
