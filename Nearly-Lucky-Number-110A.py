# https://codeforces.com/problemset/problem/110/A
def is_nearly_lucky(n):
    lucky_digit_count = str(n).count('4') + str(n).count('7')

    return lucky_digit_count in {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777}


n = int(input().strip())

if is_nearly_lucky(n):
    print("YES")
else:
    print("NO")