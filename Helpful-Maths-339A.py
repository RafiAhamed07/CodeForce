# https://codeforces.com/problemset/problem/339/A
s = input()

summands = []

for char in s:
    if char.isdigit():
        summands.append(char)


summands.sort()

new_sum = '+'.join(summands)
print(new_sum)