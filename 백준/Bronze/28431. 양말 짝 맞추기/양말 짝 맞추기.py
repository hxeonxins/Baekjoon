s = []

for _ in range(5):
    num = int(input())
    
    if num in s:
        s.remove(num)
    else:
        s.append(num)
        
print(s[0])