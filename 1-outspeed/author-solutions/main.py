def gcd(a, b):
    if (b == 0):
        return a
    return gcd(b, a % b)

n = int(input())
a = [int(item) for item in input().split()]

lcm = a[0]
for i in range(1, n):
    lcm = (((a[i] * lcm)) //
            (gcd(a[i], lcm)))

print(lcm)