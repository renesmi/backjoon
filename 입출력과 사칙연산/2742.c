#include <stdio.h>

int main() {
    int a;
    int i = 0;
    scanf("%d",&a);
    //scanf뒤에 개행X
    i=a;
    for (;i>0;i--)
        //for (;참일떄 이행 조건;증감식)
    {
        printf("%d\n",i);
    }
    return 0;
}
