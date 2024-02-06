num = int(input())
i = 0
arr = list(map(int, input().split()))



i = 0
primeNum = 0
while(i<num):
    j=1
    count = 0
    number = arr.pop()
    while(j<=number):
        if(number%j==0):
            count = count + 1
        j=j+1
    if (count == 2):
        primeNum = primeNum + 1
    i=i+1


print(primeNum)