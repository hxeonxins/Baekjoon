import sys
input = sys.stdin.readline

N, M = map(int, input().rstrip().split())
arr = list(map(int, input().rstrip().split()))
start_idx = 0
end_idx = 1
val = sum(arr[start_idx:end_idx])
max_val = 0

while True:
    try:
        if val <= M:
            if val > max_val:
                max_val = val
            val += arr[end_idx]
            end_idx += 1
        else:
            val -= arr[start_idx]
            start_idx += 1
    except IndexError:
        break
print(max_val)