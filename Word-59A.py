# https://codeforces.com/problemset/problem/59/A
def correct_word(word):
    uppercase_count = sum(1 for char in word if char.isupper())
    lowercase_count = len(word) - uppercase_count

    if uppercase_count > lowercase_count:
        corrected_word = word.upper()
    else:
        corrected_word = word.lower()

    return corrected_word

word = input().strip()

result = correct_word(word)
print(result)