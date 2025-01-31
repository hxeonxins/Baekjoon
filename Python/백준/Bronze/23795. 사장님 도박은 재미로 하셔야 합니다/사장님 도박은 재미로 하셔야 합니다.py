lst = []
while True:
    number = int(input())
    if number == -1:
        total = sum(lst)
        print(total)
        break
    else:
        lst.append(number)