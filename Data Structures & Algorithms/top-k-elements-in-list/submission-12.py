

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        elements = {}

    #This set of code sets a key value pair for the frequency of occurence of values within nums

        for num in nums:
            if num not in elements:
                elements[num] = 1
            else:
                elements[num] +=1
            
        sorted_elements = sorted(elements.items(), key=lambda x: x[1], reverse=True) #Sorts the hash map in descending order based on values in hashmap

        numbers = []

        for i in range(0,k):
            numbers.append(sorted_elements[i][0])

        return numbers




        



































'''
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        myMap = {}

        for num in nums:
            myMap[num] = 1 + myMap.get(num, 0) #stores values in map

        sorted_hash = dict(sorted(myMap.items(), key=lambda x: x[1], reverse=True))

        arr = []
        current_value = 0

      
        for key in sorted_hash:
            if current_value >= k:
                break
            arr.append(key)
            current_value += 1

    
        return arr

        '''
            


        

