// https://codeforces.com/problemset/problem/112/A
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_lowercase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str1[101], str2[101];
    
    // Input two strings
    scanf("%s", str1);
    scanf("%s", str2);
    
    // Convert strings to lowercase
    to_lowercase(str1);
    to_lowercase(str2);
    
    // Compare strings
    int result = strcmp(str1, str2);
    
    if (result > 0) {
        printf("1\n");
    } else if (result < 0) {
        printf("-1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}