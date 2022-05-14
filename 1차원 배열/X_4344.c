#include <stdio.h>

int main(){
    int a,b;
    float c;
    float sum=0;
    float rate=0;
    scanf("%d",&a);
    float rate_arr[a];
    
    for (int i = 0;i<a ;i++){
        scanf("%d",&b);
        float input_num[b];
        for(int i2 =0;i2<b;i2++){
            scanf("%f",&c);
            input_num[i2]=c;
            sum += c;
        }
        
        for(int i2 =0;i2<b;i2++){
            if(sum/(float)b<input_num[i2]){
                rate+=1/(float)b*100;
            }
        rate_arr[i] = rate;
        rate=0;
        }
    }
    for (int i = 0;i<a;i++){
    printf("%.3f%%\n",rate_arr[i]);
    }
}

