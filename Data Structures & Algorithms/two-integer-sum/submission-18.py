
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        mp = {}


        for j in range(len(nums)):
                mp[nums[j]]= j

        
        for i in range(len(nums)):
            value = target - nums[i]
            if value in mp and mp[value] != i:
                return [i, mp[value]]









































        # mp = {}

        # for i in range(len(nums)):
        #     mp[nums[i]] = i

        # for i in range(len(nums)):
        #     value = target - nums[i]

        #     if value in mp and mp[value] != i:
        #         return [i, mp[value]]




        






























        '''

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
            



        