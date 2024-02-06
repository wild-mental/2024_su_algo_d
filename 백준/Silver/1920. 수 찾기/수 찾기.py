import sys

def binary_search(array, value):
    start, end = 0, len(array)-1
    while start <= end:
        mid = (start + end) // 2
        if array[mid] == value:
            print(1)
            return
        elif array[mid] < value:
            start = mid + 1
        else:
            end = mid - 1
    print(0)
    return

N = int(input())
arr1 = list(map(int, sys.stdin.readline().split()))
M = int(input())
arr2 = list(map(int, sys.stdin.readline().split()))

arr1.sort()     #정렬을 먼저 해준뒤에 반복문에 넣으면 시간이 단축됨
for i in arr2:
    binary_search(arr1, i)