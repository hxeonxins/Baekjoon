import sys

lst = []
a,b,c = map(int, sys.stdin.readline().split())
lst.append(a)
lst.append(b)
lst.append(c)

sum = sorted(lst)
print(sum[-2])