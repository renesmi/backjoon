#include <stdio.h>
int main(void){
    int a, b;
    int i =0;
    int inputvalue;
    int min = 1000000;
    int max = -1000000;
    scanf("%d", &a);
    
    inputvalue = a;
    
    int numArr[a];
    
    for (;a>0;a--,i++){
        scanf("%d",&b);
        numArr[i] = b;
    }
    a = inputvalue;

    int j = 0;
    for (;j<a;j++){
        if(numArr[j]<min){
            min = numArr[j];
        }
        if(numArr[j]>max){
            max = numArr[j];
        }
    }
    printf("%d %d",min,max);
    return 0;
}
