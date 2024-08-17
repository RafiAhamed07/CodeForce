# https://codeforces.com/problemset/problem/977/A

n, k = map(int, input().split())

for i in range(0, k):
    if(str(n)[-1] == '0'):
        n = n // 10
    else:
        n = n-1


print(n)