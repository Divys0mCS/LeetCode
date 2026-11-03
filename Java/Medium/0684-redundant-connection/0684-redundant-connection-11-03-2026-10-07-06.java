
class UnionFind {
    private int[] parent;

    public UnionFind(int size) {
        parent = new int[size];

        for (int i = 0; i < size; i++) {
            parent[i] = -1;
        }
    }
    int find(int i) {
        if (parent[i] == -1) {
            return i;
        }
        return parent[i] = find(parent[i]);
    }
    boolean union(int i, int j) {
        int repI = find(i);
        int repJ = find(j);

        if (repI == repJ) {
            return true;
        }
        parent[repI] = repJ;
        return false;
    }
}

class Solution {
    public int[] findRedundantConnection(int[][] edges) {
        UnionFind uf = new UnionFind(edges.length);
        for (int i = 0; i < edges.length; i++) {

            int a = edges[i][0] - 1;
            int b = edges[i][1] - 1;

            if (uf.union(a, b)) {
                return edges[i];
            }
        }
        return new int[0];
    }
}