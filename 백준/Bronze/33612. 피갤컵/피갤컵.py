N = int(input())

year = 2024
month = 8 + (N - 1) * 7

# 월이 12 넘어가면 연도로 넘기기
year += (month - 1) // 12
month = (month - 1) % 12 + 1

print(year, month)
