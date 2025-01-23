#90일 이하로 남은 것만 사용할 때 사용하는 깊티의 갯수 출력
cnt = 0
n = int(input())
for i in range(n):
    gifty = input()
    result = gifty.split('-')
    result = int(result[1])
    if result <= 90:
        cnt = cnt+1
print(cnt)