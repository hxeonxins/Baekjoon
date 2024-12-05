key = input()

n = int(input())
cnt=0
for i in range(1, n+1):
    a = input()
    if a==key:
        cnt = cnt+1
print(cnt)