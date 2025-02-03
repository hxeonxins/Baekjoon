word = input()

if all(c in word for c in "MOBIS"):
    print("YES")
else:
    print("NO")
