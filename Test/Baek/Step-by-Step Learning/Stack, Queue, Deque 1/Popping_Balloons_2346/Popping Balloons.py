from collections import deque

N = int(input())

values = list(map(int, input().split()))

dq = deque()

for i in range(N):
    dq.append((i + 1, values[i]))

result = []

while dq:
    current = dq.popleft()
    result.append(current[0])
    
    if not dq:
        break
    
    move = current[1]
    
    if move > 0:
        for _ in range(move - 1):
            dq.append(dq.popleft())
    else:
        for _ in range(-move):
            dq.appendleft(dq.pop())

print(' '.join(map(str, result)))