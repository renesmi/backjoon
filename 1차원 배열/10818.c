#include <stdio.h>

int main() {
    int numArr[5] = {5,7,10,3,2};
    int min = 1000;
    int max = -1000;
    for (int i =0;i<5;i++){
        if (min>numArr[i]){
            min=numArr[i];
        }
        if(max<numArr[i]){
            max=numArr[i];
        }
    }
    printf("min= %d\n",min);
    printf("max= %d\n",max);
    return 0;
}
