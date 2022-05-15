#include <stdio.h>

int main(){
    int input_num;
    int sum=0;
    scanf("%d",&input_num);
    char str[input_num+1];
    scanf("%s",str);
    for(int i = 0;i<input_num;i++){
        printf("%c",str[input_num]);
        sum += (int)str[i];
    }
    printf("%d",sum);
}
