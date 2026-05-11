class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:


        arr = []
        left = 0
        right = len(numbers) - 1

        while left < right:
        
            while left < right:
                total = numbers[left] + numbers[right]

                if total == target:
                    return [left+ 1, right+ 1]
                
                right -= 1

            left +=1
            right = len(numbers) -1


        