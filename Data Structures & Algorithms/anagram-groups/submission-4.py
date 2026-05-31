class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:



        #so for this, create a has map, then we go from there

        #s = "dcba"
        #sorted_s = ''.join(sorted(s))


        mp = {}



        for string in strs:

            sorted_string = ''.join(sorted(string))
            if sorted_string not in mp:
                mp[sorted_string] = []


            mp[sorted_string].append(string) 

        return list(mp.values())   
            #goal is to take values from key-value pair in hashmap, and then essentially store them in a array
            #then return array
            #in pyhthon, this is the syntax that we use to store values from map and return them




        

            
        