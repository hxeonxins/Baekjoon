#총 방학 날짜 입력
d = int(input())

#총 풀어야 할 양 입력
kor = int(input())
math = int(input())

#하루 풀 수 있는 양 입력
d_kor = int(input())
d_math = int(input())

#며칠 걸리는지 구하기
sum_k = (kor//d_kor)+(0 if kor%d_kor==0 else 1)
sum_m = (math//d_math)+(0 if math%d_math==0 else 1)

if sum_k >= sum_m:
    print(d-sum_k)
else:
    print(d-sum_m)