#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ever ;;
int main(int argc, char *argv[]){
    char str[20];
    for(ever){
        scanf("%s", str);
        if(!strcmp(str, "xiyounet666")){
            if(argc == 0b100){
                printf("Congratulations on finishing the first level!\n");
                if(*argv[1] == 0x49){
                    printf("second level!\n");
                    int sum = 0;
                    for(int i = 0;i<strlen(argv[2]);sum += argv[2][i++]);
                    if(sum == 0527 && argv[2][0] == 0x4c && argv[2][2] == 0x76 && argv[2][3] == 0x65){
                        printf("third level\n");
                        if(!strcmp(argv[3], "you")){
                            char flag[50] = "";
                            strcat(flag, argv[1]);
                            strcat(flag, "_");
                            strcat(flag, argv[2]);
                            strcat(flag, "!==_");
                            strcat(flag, argv[3]);
                            strcat(flag, "!!!");
                            printf("flag{%s}",flag);
                        }
                    }       
                }
            }
        }
    }
    return 0; 
}