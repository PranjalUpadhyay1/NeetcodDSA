class Solution {
    public boolean isAnagram(String s, String t) 
    {
    if(s.length()!= t.length())
    {
      return false;
    }

       HashMap<Character, Integer> hashMap_s = new HashMap<>();

       for(char S: s.toCharArray())
      {
        hashMap_s.put(S,hashMap_s.getOrDefault(S,0)+1);
      }
      for(char S: t.toCharArray())
      {
        if(!hashMap_s.containsKey(S))
        {
          return false;
        }
        hashMap_s.put(S, hashMap_s.get(S) - 1);

        if(hashMap_s.get(S)<0)
        {
          return false;
        }
      }
      return true;

      
    }
}