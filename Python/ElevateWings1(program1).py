'''
Question:

There is one game in casino, in that game player have different number of coins. Game player
want to win the game maximum profit but one condition is there in game that coins should be sorted in
increasing order. If order of coins is 2,202,2,3,200,4,5 then player will gain profit of 205.
if order of coins is 5,6,8,20 then player will get profit of 39. Constarints: consider N is number of coins.0
'''

N = int(input())
arr = [0]*N

for i in range(0,N):
    arr[i] = int(input())

prev = profit = maxprofit = arr[0]

for i in range(1,N):
    if prev < arr[i]:
        profit = profit + arr[i]
    elif prev > arr[i]:
        if profit > maxprofit:
            maxprofit = profit
        profit = arr[i]
    
    prev = arr[i]
    
if profit > maxprofit:
    maxprofit = profit
    
print(maxprofit)
    