// Last updated: 5/24/2025, 1:50:05 AM
class Solution {
    public boolean wordPattern(String pattern, String s) {
       String[] words = s.split(" ");
       if(pattern.length()!= words.length) return false;

       Map<Character,String> map = new HashMap<>();
       Set<String> usedwords = new HashSet<>();

       for(int i=0;i<pattern.length();i++){
            char c = pattern.charAt(i);
            String word = words[i];

            if(map.containsKey(c)){
                if(!map.get(c).equals(word)) return false;

            }else{
                if(usedwords.contains(word)) return false;
                map.put(c, word);
                usedwords.add(word);
            }

       }
       return true;
}

}