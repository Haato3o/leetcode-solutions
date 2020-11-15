#include <stack>
using namespace std;
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        stack<TreeNode*> stk;
        int sum = 0;
        TreeNode* current = root;
        while (current != nullptr || stk.size() > 0) {
            while (current != nullptr) {
                stk.push(current);
                current = current->left;
            }
            
            current = stk.top();
            stk.pop();
            
            if (current->val >= low && current->val <= high) {
                sum += current->val;
            }
            current = current->right;
        }
        return sum;
    }
};