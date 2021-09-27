#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* convertToTitle(long long columnNumber) {
    char* s = (char*)malloc(100);
    memset(s, 0, 100);
    long long x = columnNumber % 26;
    if(columnNumber / 26 >= 1 && x != 0) {
        char* s1 = convertToTitle(columnNumber / 26);
        strcat(s, s1);
        free(s1);
        s[strlen(s)] = 'A' - 1 + x;
    }
    else if(columnNumber / 26 > 1 && x == 0) {
        char* s1 = convertToTitle(columnNumber / 26 - 1);
        strcat(s, s1);
        free(s1);
        s[strlen(s)] = 'Z';
    }
    else if(columnNumber / 26 == 1 && x == 0) {
        s[strlen(s)] = 'Z';
    }
    else {
        s[strlen(s)] = 'A' - 1 + x;
    }
    return s;
}
char str1[100] = {"LOVEYOU"};
int main(void) {
    long long str;
    printf("Welcome to XuntCTF\n");
    printf("Please input your favorite number:");
    while(scanf("%lld", &str)) {
        char s[100];
        memset(s, 0, sizeof(s));
        strcat(s, convertToTitle(str));
        if(!strcmp(s, str1)) {
            printf("congratulation!");
            break;
        }
        else
            printf("try again\n");
    }
    return 0;
}
