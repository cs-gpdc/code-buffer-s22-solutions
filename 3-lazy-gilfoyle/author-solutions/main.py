n = int(input())
a = [int(item) for item in input().split()]
reward = 0
s = []
for i,v in enumerate(a):
    while s and a[s[-1]] < a[i]:
        s.pop()
    prev = -1
    if s:
        prev = s[-1]
    count = i-prev
    reward += count * a[i]
    s.append(i)
print(reward)