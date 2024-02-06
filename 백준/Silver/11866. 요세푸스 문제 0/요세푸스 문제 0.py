N, K = map(int, input().split())
arr = []
answer = []
for i in range(1, N+1):
    arr.append(i)

x = K - 1
while(0<len(arr)):
    while(x>len(arr)):
        x = x - len(arr)
    if (x == len(arr)):
        x = 0
    answer.append(arr.pop(x))
    x = x + (K - 1)

print('<', end="")
for i in answer:
    if(i == answer[-1]):
        print(i, end="")
    else:
        print(i, end=", ")
print('>')