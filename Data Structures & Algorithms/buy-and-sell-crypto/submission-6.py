           
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        greatest = 0

        for x in range(len(prices)):
            for i in range(x + 1, len(prices)):
                value = prices[i] - prices[x]

                if value > greatest:
                    greatest = value

        return greatest




            