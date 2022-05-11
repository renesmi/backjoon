#include <stdio.h>
int main(void){
    int numArr[9];
    int a, max=0,max_order;
    for (int i = 0; i<9;i++)
    {
        scanf("%d",&a);
        numArr[i]=a;
    }
    for (int j=0;j<9;j++)
    {
        if (numArr[j]>max)
        {
            max = numArr[j];
        }
        
    }
    for (int l=0;l<9;l++)
    {
        if(max==numArr[l])
        {
            max_order=l;
        }
    }
    printf("%d\n",max);
    printf("%d\n",max_order);
}
