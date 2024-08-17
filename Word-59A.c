// https://codeforces.com/problemset/problem/59/A
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void correct_word(char* word) {
    int uppercase_count = 0;
    int lowercase_count = 0;
    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        if (isupper(word[i])) {
            uppercase_count++;
        } else {
            lowercase_count++;
        }
    }

    if (uppercase_count > lowercase_count) {
        for (int i = 0; i < length; i++) {
            word[i] = toupper(word[i]);
        }
    } else {
        for (int i = 0; i < length; i++) {
            word[i] = tolower(word[i]);
        }
    }
}

int main() {
    char word[101];  // Assuming the word won't exceed 100 characters
    scanf("%100s", word);

    correct_word(word);

    printf("%s\n", word);

    return 0;
}
