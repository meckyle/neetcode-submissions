class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:


        my_map = {}

        for num in nums:

            if num in my_map:
                my_map[num] += 1
            
            else:
                my_map[num] = 1

        for num in nums:
            if my_map[num] >= 2:
                return True
        
        return False
























        
        
        '''
        seen = set()

        for num in nums:
            if num in seen:
                return True
            seen.add(num)
        return False

'''


