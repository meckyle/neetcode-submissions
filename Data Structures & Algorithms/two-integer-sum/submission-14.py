class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        mapS = {}

        

        for i in range(len(nums)):
            a = i + 1
            value = target - nums[i]

            while a < len(nums): 
                if value == nums[a]:
                    return [i,a]
                else:
                    a +=1
  




































































        '''

        map = []

        for i, num in enumerate(nums):
            value = target - num
            if value in map:
                return [map.index(value), i]
            map.append(num)
            



#-----------------------------------------------

        map = {}

        for i, num in enumerate(nums):
            value = target - num
            if value in map:
                return [map[value], i]
            map[num] = i



        return false
            
        '''
            



        