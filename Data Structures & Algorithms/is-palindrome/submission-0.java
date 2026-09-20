class Solution {
    public boolean isPalindrome(String s) {
        String temp = "";
        for (Character ch : s.toCharArray()) {
            if (ch >= 'a' && ch <= 'z') temp += ch;
            else if (ch >= 'A' && ch <= 'Z') temp += (char)(ch + 32);
            else if (ch >= '0' && ch <= '9') temp += ch;
        }
        int i = 0;
        int j = temp.length() - 1;
        while (i < j) {
            if (temp.charAt(i) != temp.charAt(j)) return false;
            i++;
            j--;
        }
        return true;
    }
}
