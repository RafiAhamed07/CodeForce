#https://codeforces.com/problemset/problem/41/A

s = input()
k = input()

i = k[::-1]
if s == i:
    print("YES")
else:
    print("NO")