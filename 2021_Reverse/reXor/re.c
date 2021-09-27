#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str2[] = {87, 50, 94, 61, 82, 63, 90, 5, 113, 30, 65, 57, 76, 19, 125, 24, 108, 0};
int main(void) {
    char str[100];
    do {  // "Welcome_to_xu_net"
        char ch;
        int n = 0;
        while((ch = getchar()) != '\n')
            str[n++] = ch;
        str[n] = '\0';
        if(strlen(str) != 17)
            continue;
        for(int i = 1; i < strlen(str); i++)
            str[i] ^= str[i - 1];
        str[17] = '\0';
    } while(strcmp(str, str2) != 0 && printf("Try again!\n"));
    printf("Congratulation!\n");
    return 0;
}