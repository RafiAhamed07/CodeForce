# https://codeforces.com/problemset/problem/236/A
name = input()

name = set(name)

if len(name) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")