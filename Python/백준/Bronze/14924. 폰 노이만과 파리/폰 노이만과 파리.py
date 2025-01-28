#이 문제를 푸는 “간단한 논리”는 다음과 같다.  두 기차는 200/(50*2) = 2 시간 후에 만난다.  파리는 2시간동안 시간당 75마일의 속도로 이동하므로 2*75 = 150 마일을 이동한다.
#input = 50 75 200
import sys
s,t,d = map(int, sys.stdin.readline().split())

train = d // (s*2)
fly = train * t

print(fly)