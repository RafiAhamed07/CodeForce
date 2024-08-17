# https://codeforces.com/problemset/problem/546/A

k, n, w = map(int, input().split())


total_cost = k * (w * (w + 1) // 2)

borrow_amount = max(0, total_cost - n)

print(borrow_amount)