import sys

n = int(input())
arr=[]
answer = []
for i in range(n):
    str = sys.stdin.readline().split()
    if(len(str)==2):
        arr.append(str[1])
    else:
        if(str[0]=="pop"):
            if(len(arr)==0):
                answer.append(-1)
            else:
                answer.append(arr.pop())
        elif(str[0]=="size"):
            answer.append(len(arr))
        elif(str[0]=="empty"):
            if(len(arr) != 0):
                answer.append(0)
            else:
                answer.append(1)
        elif(str[0]=="top"):
            if(len(arr)==0):
                answer.append(-1)
            else:
                answer.append(arr[len(arr)-1])


for i in range(len(answer)):
    print(answer[i])