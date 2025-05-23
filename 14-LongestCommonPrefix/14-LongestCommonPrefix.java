// Last updated: 5/24/2025, 1:51:10 AM
class Solution {
    public String longestCommonPrefix(String[] strs){
        Arrays.sort(strs);
        String first = strs[0];
        String second = strs[strs.length - 1];
        int c=0;
        while(c<first.length()){
            if(first.charAt(c)==second.charAt(c)){
                c++;
             } else{
                break;
             }
        }return c==0 ? "" : first.substring(0,c);
    }
}