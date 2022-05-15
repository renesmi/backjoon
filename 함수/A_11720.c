#include <stdio.h>

int main(){
  char arr[100]={0,};  //초기화
  int n,i,result = 0;
  scanf("%d",&n);
  scanf("%s",arr);
  for (i =0;i<n;i++){
  result += arr[i]-'0'; //문자를 int  값으로 변환해주어야함. 
  }
  printf("%d\n",result);
  }
