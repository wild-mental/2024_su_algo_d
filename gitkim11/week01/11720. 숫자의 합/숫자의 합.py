import sys

input = sys.stdin.readline

N=int(input())
list = [int(i) for i in input().strip()]
print(sum(list))