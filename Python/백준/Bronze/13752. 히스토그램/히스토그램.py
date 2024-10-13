import sys

n = int(sys.stdin.readline())  # 입력받은 정수를 n에 저장

symbol = '='  # str 대신 symbol로 변경
for _ in range(n):  # range(n)을 사용해 n번 반복
    num = int(sys.stdin.readline())  # 입력받은 숫자를 num에 저장
    print(symbol * num)  # symbol을 num만큼 출력
