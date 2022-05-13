#include <stdio.h>

int main(){
    int n,a;
    float numsum=0;
    float max=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        numsum += a;
        if(max<a){
        max = a;
        }
        
}
printf("%f\n",numsum/n/max*100);
  //n으로 나눠주기

}
