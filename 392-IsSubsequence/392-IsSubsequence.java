// Last updated: 5/24/2025, 1:50:02 AM
class Solution {
    public boolean isSubsequence(String s, String t) {
 int i=0, j=0;
 while(i<s.length() && j<t.length()){
    if(s.charAt(i) == t.charAt(j)){
        i++;
    }
    j++;
 } 
 return i == s.length();
    }
}