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
    public List<Integer> inorderTraversal(TreeNode root) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        inOrder(root , ans);
        return ans;
    }
    void inOrder(TreeNode node, ArrayList<Integer> ans){
        if(node ==  null)
            return;
        inOrder(node.left , ans);
        ans.add(node.val);
        inOrder(node.right , ans);
    }
}