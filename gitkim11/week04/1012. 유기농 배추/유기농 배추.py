import sys

sys.setrecursionlimit(10 ** 5)
input = sys.stdin.readline

MAX = 50 + 10

dirRow = [1, -1, 0, 0]
dirColumn = [0, 0, 1, -1]

def dfs(y, x):
    global visited
    visited[y][x] = True
    for dirIdx in range(4):
        newY = y + dirRow[dirIdx]
        newX = x + dirColumn[dirIdx]
        if graph[newY][newX] and not visited[newY][newX]:
            dfs(newY, newX)

T = int(input())
for _ in range(T):
    M, N, K = map(int, input().split())
    graph = [[False] * MAX for _ in range(MAX)]
    visited = [[False] * MAX for _ in range(MAX)]

    for _ in range(K):
        X, Y = map(int, input().split())
        graph[Y + 1][X + 1] = True

    answer = 0
    for i in range(1, N + 1):
        for j in range(1, M + 1):
            if graph[i][j] and not visited[i][j]:
                dfs(i, j)
                answer += 1

    print(answer)
