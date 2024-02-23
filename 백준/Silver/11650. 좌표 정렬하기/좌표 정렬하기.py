import sys

N = int(input())
arr2 = []*N
arr3 = []*2
for i in range(0,N):
    arr1 = list(map(int, sys.stdin.readline().split()))
    arr2.append(arr1)

arr2.sort()

for i in range(0,N):
    print(arr2[i][0],arr2[i][1],sep=' ')