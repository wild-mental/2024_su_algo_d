n = int(input())
arr2 = []
for i in range(n):
    arr2.append(input())

for i in range(n):
    x = 0
    if(arr2[i][0] == ')'):
        print('NO')
        continue

    for j in range(len(arr2[i])):
        if(arr2[i][j]=='('):
            x = x + 1
        elif(arr2[i][j]==')'):
            x = x - 1
        if(x<0):
            print('NO')
            break
    if (x < 0):
        continue


    if(x == 0):
        print('YES')
    else:
        print('NO')