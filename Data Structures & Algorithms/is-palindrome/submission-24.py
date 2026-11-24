
class Solution:
    def isPalindrome(self, s: str) -> bool:

        newstr = ""

        for c in s:
            if c.isalnum():
                newstr += c.lower()
                
        left = 0

        right = len(newstr) -1

        while left < right:
            if newstr[left] != newstr[right]:
                return False
            left+=1
            right-=1

        return True
        









        









































        # newStr = ""

        # for c in s:
        #     if c.isalnum():
        #         newStr += c.lower()


        # left = 0
        # right = len(newStr) - 1  # use len(st), not len(s)

        # while left < right:
        #     if newStr[left] != newStr[right]:
        #         return False
        #     left += 1
        #     right -= 1
        # return True

