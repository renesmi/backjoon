//
//  main.c
//  1110
//
//  Created by 너굴 on 2022/05/10.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *str = malloc(sizeof(char)*10);
    char *s2 = malloc(sizeof(char)*100);
    
    int num=0;
    int b;
    scanf("%d",&b);
    scanf("%s",str);
    while(str[num]!=0){
        for (int i=0;i<b;i++){
            strcat(s2,str); //여기서 오류 남
        }
    }
    printf("%s\n",s2);
    free(s2);
    return 0;
}
