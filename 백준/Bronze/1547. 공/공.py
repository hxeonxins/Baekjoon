ball = [0,1,0,0]
n = int(input())
for i in range(n):
    x, y = map(int, input().split())
    ball[x], ball[y] = ball[y], ball[x]
    
print(ball.index(1))