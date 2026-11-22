class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        if len(s) != len(t):
            return False

        sdic = {}
        tdic = {}
        
        for lettera in s:
            if lettera in sdic:
                sdic[lettera] +=1
            else:
                sdic[lettera] = 1

        for lettert in t:
            if lettert in tdic:
                tdic[lettert] +=1
            else:
                tdic[lettert] = 1

        if sdic == tdic:
            return True

        else:
            return False
            
        









































        # if len(s) != len(t):
        #     return False

        # map1 = {}
        # map2 = {}

        # for c in s:
        #     if c not in map1:
        #         map1[c] = 1
        #     else:
        #         map1[c] += 1


        # for c in t:
        #     if c not in map2:
        #         map2[c] = 1
        #     else:
        #         map2[c] += 1
            

        # if map1 == map2:
        #     return True
        # else:
        #     return False
                










        




































        '''

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


        
'''

      
      
      
      
      

        

        