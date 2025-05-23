// Last updated: 5/24/2025, 1:50:29 AM


class Solution {
    public boolean isPalindrome(String s) {
        s = s.replaceAll("[^a-zA-Z0-9]", "").toLowerCase();;
        int j = s.length();
        for(int i = 0 ; i < j/2; i++){
            if(s.charAt(i)!=s.charAt(j-1-i)){
            return false;
        
            }
                
            }return true;
    }
}

