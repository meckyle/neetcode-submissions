class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:


        value = 1


        numbers = []


        for i in range(len(nums)):
            for j in range(len(nums)):
                if j != i:
                    value = value * nums[j]
            j = 0
            numbers.append(value)
            value = 1
       
        return numbers




               








       

