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

arr1.sort()
for i in arr2:
    binary_search(arr1, i)