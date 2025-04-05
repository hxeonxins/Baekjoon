n = int(input())
pay = 1000 - n
count = 0

coin_types = [500, 100, 50, 10, 5, 1]

for coin in coin_types:
    count += pay // coin
    pay %= coin
    
print(count)