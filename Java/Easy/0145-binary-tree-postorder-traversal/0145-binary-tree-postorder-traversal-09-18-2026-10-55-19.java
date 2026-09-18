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
    public List<Integer> postorderTraversal(TreeNode root) {
        ArrayList<Integer> ans = new ArrayList<Integer>();
        PostOrder(root , ans);
        return ans;
    }
    void PostOrder(TreeNode node, ArrayList<Integer> ans){
        if(node ==  null)
            return;
        PostOrder(node.left , ans);
        PostOrder(node.right , ans);
        ans.add(node.val);
    }
}