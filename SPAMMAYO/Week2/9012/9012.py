N = int(input())
for i in range(N):
    A = []
    B = input()
    for j in B:
        if j == '(':
            A.append(j)
        elif j == ')':
            if A:
                A.pop()
            else:
                print("NO")
                break
    else:
        if not A:
            print("YES")
        else:
            print("NO")