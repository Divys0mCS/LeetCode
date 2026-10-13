class MinStack {
    ArrayList<Integer> ans;
    ArrayList<Integer> manager;

    public MinStack() {
        ans = new ArrayList<>();
        manager = new ArrayList<>();
    }
    
    public void push(int value) {
        ans.add(value);
        if (manager.isEmpty()) {
            manager.add(value);
        } else {
            int currentMin = manager.get(manager.size() - 1);
            manager.add(Math.min(value, currentMin));
        }
    }
    
    public void pop() {
        ans.remove(ans.size() - 1);
        manager.remove(manager.size() - 1);
    }
    
    public int top() {
        return ans.get(ans.size() - 1);
    }
    
    public int getMin() {
        return manager.get(manager.size() - 1);
    }
}