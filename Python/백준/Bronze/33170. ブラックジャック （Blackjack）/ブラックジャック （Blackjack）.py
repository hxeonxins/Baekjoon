#주어진 3개의 값의 합이 21이하라면 1을, 그렇지 않으면 0을 출력하자.
a = int(input())
b = int(input())
c = int(input())

sum = a+b+c
if sum <= 21:
    print("1")
else:
    print("0")