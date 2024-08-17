# https://codeforces.com/problemset/problem/734/A
n = int(input())
results = input()


anton_wins = results.count('A')
danik_wins = results.count('D')

if anton_wins > danik_wins:
    print("Anton")
elif anton_wins < danik_wins:
    print("Danik")
else:
    print("Friendship")