#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    printf("please input account:");
    char str[100];
    scanf("%s", str);
    getchar();
    printf("please input password:");
    int i = 0;
    while(1) {
        char ch = getchar();
        if(ch == '\n')
            break;
        str[i] = str[i] + ch - 48;
        i++;
    }
    char str1[] = {"ftaenng"};
    if(!strcmp(str, str1))
        printf("You_are_right!");
    else
        printf("wrong");
}