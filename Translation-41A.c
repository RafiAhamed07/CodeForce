// https://codeforces.com/problemset/problem/41/A

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    char k[1000];
    

    scanf("%s", s);
    scanf("%s", k);
    
    int len = strlen(k);
    char i[len + 1]; 


    for (int j = 0; j < len; j++) {
        i[j] = k[len - j - 1];
    }
    i[len] = '\0'; 


    if (strcmp(s, i) == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
