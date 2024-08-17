// https://codeforces.com/problemset/problem/236/A
#include <stdio.h>
#include <string.h>

int main() {
    char name[101];  
    int count[26] = {0}; 
    int uniqueCount = 0;


    scanf("%s", name);


    for (int i = 0; i < strlen(name); i++) {
        int index = name[i] - 'a'; 
        if (count[index] == 0) {
            uniqueCount++;
        }
        count[index]++;
    }

    if (uniqueCount % 2 == 0) {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }

    return 0;
}