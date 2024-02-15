import sys

input = sys.stdin.readline

N = int(input().rstrip())
s = []

for _ in range(N):
    op = list(map(str, input().split()))
    if op[0] == 'push':
        s.append(int(op[1]))
    elif op[0] == 'pop':
        print(s[-1] if len(s) else -1)
        s = s[:-1]
    elif op[0] == 'size':
        print(len(s))
    elif op[0] == 'empty':
        print(0 if len(s) else 1)
    elif op[0] == 'top':
        print(s[-1] if len(s) else -1)
