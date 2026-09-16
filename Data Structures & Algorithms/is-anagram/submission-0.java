class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap <Character, Integer> mp = new HashMap<>();
        for (char ch : s.toCharArray()) {
            mp.put(ch, mp.getOrDefault(ch, 0) + 1);
        }
        for (char ch : t.toCharArray()) {
            mp.put(ch, mp.getOrDefault(ch, 0) - 1);
        }
        for (char key : mp.keySet()) {
            if (mp.get(key) != 0) return false;
        }
        return true;
    }
}
