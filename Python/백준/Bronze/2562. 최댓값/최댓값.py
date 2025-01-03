lst = []
for i in range(0,9):
    a = int(input())
    lst.append(a)
max_val = max(lst)
print(max_val)
max_index = lst.index(max_val)
print(max_index+1)