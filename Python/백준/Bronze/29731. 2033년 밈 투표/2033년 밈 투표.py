mimList = [
    'Never gonna give you up',
    'Never gonna let you down',
    'Never gonna run around and desert you',
    'Never gonna make you cry',
    'Never gonna say goodbye',
    'Never gonna tell a lie and hurt you',
    'Never gonna stop'
]

n = int(input())

sign = 0

for i in range(n):
    name = input()
    if name not in mimList:
        print("Yes")
        sign = 1
        break;
if sign == 0:
    print("No")