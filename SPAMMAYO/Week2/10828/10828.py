import sys
N = int(sys.stdin.readline())

A = []

for i in range(N):
    B = sys.stdin.readline().split()
    if B[0] == 'push':
        A.append(B[1])
    elif B[0] == 'pop':
        if len(A) > 0:
            print(A.pop())
        else:
            print(-1)
    elif B[0] == 'size':
        print(len(A))
    elif B[0] == 'empty':
        if len(A) == 0:
            print(1)
        else:
            print(0)
    elif B[0] == 'top':
        if len(A)>0:
            print(A[-1])
        else:
            print(-1)
