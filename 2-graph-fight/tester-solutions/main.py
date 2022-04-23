def check(degree, n):
    deg_sum = sum(degree)
    return (2*(n-1) == deg_sum)
     
n = int(input())
degree = [int(item) for item in input().split()]
if (check(degree, n)):
    print("Yes")
else:
    print("No")