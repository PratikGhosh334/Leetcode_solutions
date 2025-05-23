# Last updated: 5/24/2025, 1:50:39 AM
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price=float('inf')
        max_profit=0
        for price in prices:
          if price<min_price:
            min_price = price
          potential_profit = price - min_price

          if potential_profit>max_profit:
             max_profit=potential_profit
        return max_profit