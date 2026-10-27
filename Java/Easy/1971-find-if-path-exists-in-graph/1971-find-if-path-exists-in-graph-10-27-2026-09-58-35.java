class Solution {
    public class UnionFind{
        private int[] parent;
        public UnionFind(int size) { 
            parent = new int[size]; 
            for (int i = 0; i < size; i++) {
                parent[i] = -1;
            }
        }
        int Find(int i){
            if(parent[i] == -1){
                return i;
            }
            else if(parent[i] == i){
                return i;
            }
            return parent[i] = Find(parent[i]);
        }
        void union(int i, int j){
            int repI =  Find(i);
            int repJ = Find(j);
            if (repI != repJ) {
                parent[repI] = repJ;
            }
        }
    }
    public boolean validPath(int n, int[][] edges, int source, int destination) {
        if (source == destination) {
            return true;
        }
        UnionFind uf = new UnionFind(n);
        for (int[] edge : edges) {
            uf.union(edge[0], edge[1]);
        }
        return uf.Find(source) == uf.Find(destination);
    }
}