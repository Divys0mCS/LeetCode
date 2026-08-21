class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> mapy = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {

            if (mapy.containsKey(nums[i])) {
                mapy.put(nums[i], mapy.get(nums[i]) + 1);
            } 
            else {
                mapy.put(nums[i], 1);
            }
        }
        PriorityQueue<Integer> heap = new PriorityQueue<>(
            (a, b) -> mapy.get(a) - mapy.get(b)
        );
        for (int num : mapy.keySet()) {
            heap.add(num);
            if (heap.size() > k) {
                heap.poll();
            }
        }
        int[] ans = new int[k];
        for (int i = k - 1; i >= 0; i--) {
            ans[i] = heap.poll();
        }
        return ans;
    }
}