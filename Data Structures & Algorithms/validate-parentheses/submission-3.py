class Solution:
    def isValid(self, s: str) -> bool:
        if len(s) % 2 != 0:
            return False

        validkey = {
            "]":"[",
            "}":"{",
            ")":"(",
        }

        stack = []

        for char in s:
            if char in validkey:
                if not stack or stack[-1] != validkey[char]:
                    return False
                else:
                    stack.pop()
            else:
                stack.append(char)
        return len(stack) == 0




            





        