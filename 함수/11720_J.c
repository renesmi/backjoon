#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int input_num;
  int sum=0;
  char *a;
  
  scanf("%d",&input_num);
  a= malloc(input_num);         //포인터 a에 메모리 할당, input num 크기 만큼
  memset(a, 0x00, input_num);   //a d에 크기 input_num만큼 0x00으로 바꿈
  scanf("%s",a);                // a에 문자열 받기
  for (int i =0;i<input_num;i++){
  sum += a[i] - '0';            //문자열을 int 로 출력할 수 있도록 변환
  }
  printf("%d",sum);
  return 0;


}
