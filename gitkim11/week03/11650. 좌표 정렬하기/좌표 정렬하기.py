import sys

input = sys.stdin.readline

N = int(input())
s = []
for _ in range(N):
    s.append(list(map(int, input().split())))

s.sort(key=lambda x: (x[0], x[1]))

for x, y in s:
    print(x, y)
