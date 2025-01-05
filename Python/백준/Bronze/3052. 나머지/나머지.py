lst=[]
for i in range(0, 10):
    a = int(input())
    if a % 42 not in lst:
        lst.append(a%42) #set()은 중복을 '제거'함. 여기서는 중복을 '하나'로 합쳐야 됨
print(len(lst))