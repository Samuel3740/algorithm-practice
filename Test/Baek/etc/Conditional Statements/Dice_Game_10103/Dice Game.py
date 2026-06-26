n = int(input())

changyoung_score = 100
sangdeok_score = 100

for _ in range(n):
    c, s = map(int, input().split())
    
    if c < s:
        changyoung_score -= s
    elif c > s:
        sangdeok_score -= c

print(changyoung_score)
print(sangdeok_score)