class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:

        left = 0
        right = len(numbers) - 1

        while left < right:

            while left < right:
                #value = target - numbers[right]
                if numbers[right] + numbers[left] == target:
                    left += 1
                    right += 1
                    return [left, right]
                right -= 1

            left += 1
            right = len(numbers) - 1



        
        else:
            return []









        


        




































    
        # left = 0
        # right = len(numbers) - 1

        # while left < right:
        
        #     while left < right:
        #         total = numbers[left] + numbers[right]

        #         if total == target:
        #             return [left+ 1, right+ 1]
                
        #         right -= 1

        #     left +=1
        #     right = len(numbers) -1






        