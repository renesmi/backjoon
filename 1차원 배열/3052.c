#include <stdio.h>
int main(void){
    int a, arr[44]={},count=0;
    //배열을 초기화해주지 않으면 쓰레기 값이 들어간다. 
    for (int i=0;i<10;i++){
        scanf("%d",&a);
        arr[a%42]++;
    }
    for (int order=0;order<43;order++){
        printf("arr=%d\n",arr[order]);
        if(arr[order]>=1){
            count++;
            printf("count=%d\n",count);
        }
    }
    printf("%d", count);
}
