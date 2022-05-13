#include <stdio.h>
#include <string.h>

int main(){
    int N;
    int M=0;
    int current_Num;
    char str[80];
    scanf("%d",&N);
    int count[N];
    int count_sum=0;
    
    for (int i=0;i<N;i++){
        scanf("%s",&str);
        for (int o = 1;o <= strlen(str);o++){
            int L =0;
            if(str[o]=="X"){
                current_Num=0;
                L=0;
            }
            else if((str[o]==str[o+1])&&(str[o]="O")){
                L +=1;
                count_sum += L;
            }
            else if ((str[o]=!str[o+1])&&(str[o]="O")){
                count_sum += 1;
            }

    }
    count_sum += count[N];
    printf("%d",count_sum);
    
}
