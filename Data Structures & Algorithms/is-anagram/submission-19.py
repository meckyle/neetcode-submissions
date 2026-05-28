class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s) != len(t):
            return False


        mps = {}
        mpt = {}

        for c in s:
            mps[c] = mps.get(c, 0) + 1

        for c in t:
            mpt[c] = mpt.get(c, 0) + 1
        
        if mps != mpt:
            return False

        else:
            return True


        


      
      
      
      
      

        

        