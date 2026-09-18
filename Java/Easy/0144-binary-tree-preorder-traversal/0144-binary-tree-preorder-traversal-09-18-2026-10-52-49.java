/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        PreOrder(root , ans);
        return ans;
    }
    void PreOrder(TreeNode node, ArrayList<Integer> ans){
        if(node ==  null)
            return;
        ans.add(node.val);
        PreOrder(node.left , ans);
        PreOrder(node.right , ans);
    }
}