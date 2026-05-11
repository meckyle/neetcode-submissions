class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        myMap = {}

        for num in nums:
            myMap[num] = 1 + myMap.get(num, 0) #stores values in map

        sorted_hash = dict(sorted(myMap.items(), key=lambda x: x[1], reverse=True))

        arr = []
        current_value = 0

        while current_value < k:

            for key in sorted_hash:
                if current_value >= k:
                    break
                arr.append(key)
                current_value += 1

    
        return arr
            


        

