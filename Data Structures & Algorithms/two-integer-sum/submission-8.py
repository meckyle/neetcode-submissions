class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:


        map = {}

        for i, num in enumerate(nums):
            value = target - num
            if value in map:
                return [map[value], i]
            map[num] = i



        return false
            

            



        