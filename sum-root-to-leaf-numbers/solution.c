/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

unsigned int solve(struct TreeNode* root, int val, int d) {
    if (root == NULL) {
        return val;
    }
    val *= d;
    val += root->val;
    if (root->right == NULL && root->left != NULL) {
        return solve(root->left, val, 10);
    } else if (root->right != NULL && root->left == NULL) {
        return solve(root->right, val, 10);
    } else {
        return solve(root->right, val, 10) + solve(root->left, val, 10);
    }
}

int sumNumbers(struct TreeNode* root){
    if (root == NULL) return 0;
    int result = solve(root, root->val, 0) / 2;
    return result;
}