N = int(input())
A = []
for i in range(N):
    a,b = map(int,input().split(" "))
    A.append((a,b))
A.sort()
for i in range(N):
    print(A[i][0],A[i][1])