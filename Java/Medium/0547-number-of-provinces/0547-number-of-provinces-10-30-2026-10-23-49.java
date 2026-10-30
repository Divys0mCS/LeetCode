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
    void union(int i, int j) {
        int repI = find(i);
        int repJ = find(j);
        if (repI != repJ) {
            parent[repI] = repJ;
        }
    }
}
class Solution {
    public int findCircleNum(int[][] isConnected) {
        int n = isConnected.length;
        UnionFind uf = new UnionFind(n);
        int provinces = n;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (isConnected[i][j] == 1) {
                    int repI = uf.find(i);
                    int repJ = uf.find(j);
                    if (repI != repJ) {
                        uf.union(repI, repJ);
                        provinces--;
                    }
                }
            }
        }
        return provinces;
    }
}