class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        List<Integer> stack = new ArrayList<>();
        for (int x : asteroids) {
            boolean isAlive = true;
            while (!stack.isEmpty() && stack.get(stack.size() - 1) > 0 && x < 0) {
                int topElement = stack.get(stack.size() - 1);
                if (topElement < -x) {
                    stack.remove(stack.size() - 1);
                }
                else if (topElement == -x) {
                    stack.remove(stack.size() - 1);
                    isAlive = false;
                    break;
                }
                else {
                    isAlive = false;
                    break;
                }
            }
            if (isAlive) {
                stack.add(x);
            }
        }
        int[] result = new int[stack.size()];
        for (int i = 0; i < stack.size(); i++) {
            result[i] = stack.get(i);
        }
        return result;
    }
}