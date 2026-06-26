from collections import deque
import sys
input = sys.stdin.readline

N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

dq = deque()
for i in range(N):
    if A[i] == 0:
        dq.append(B[i])

M = int(input())
C = list(map(int, input().split()))

result = []
for c in C:
    dq.appendleft(c)
    result.append(dq.pop())

print(' '.join(map(str, result)))