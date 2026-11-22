class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        duplicate = {}

        for num in nums:
            if num in duplicate:
                duplicate[num] += 1
                return True
            else:
                duplicate[num] = 1

        else:
            return False 







































        # maps = {}

        # for num in nums:
        #     if num in maps:
        #         maps[num] +=1
        #     else:
        #         maps[num] = 1

        # for num in nums:
        #     if maps[num] >=2:
        #         return True

        
        # return False
        









































        


