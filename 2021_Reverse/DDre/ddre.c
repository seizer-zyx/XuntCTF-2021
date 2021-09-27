#include<stdio.h>
#include<stdlib.h>
char s[]={83,58,127,45,120,111,85,100,58,126,85,111,85,120,58,58,97,59,111,10};
void flag(void){
    for(int i=0;i<20;i++){
        printf("%c",s[i]^10);
    }
}
int main(void){
    flag();
    printf("Welcome to XuntCTF\n");
    printf("where is the flag?");
    getchar();
}