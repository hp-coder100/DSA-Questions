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
    TreeNode* solve(vector<int> &nums, int start, int end){
        if(start<0 || end >= nums.size())
            return nullptr;
        if(start==end)
            return new TreeNode(nums[start]);
        int mid = start + (end - start)/2;
        
        TreeNode* node = new TreeNode(nums[mid]);
        if(mid-1 >= start)
            node->left = solve(nums, start, mid-1);
        if(mid+1 <= end)
            node->right = solve(nums, mid+1, end);
        return node;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int start=  0;
        int end = nums.size()-1;
        return solve(nums, start, end);
    }
};