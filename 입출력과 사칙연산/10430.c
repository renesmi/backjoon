#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    //scanf 함수 이용, &앰퍼샌드 붙여줄 것 = 그 주소값에 받은 값을 넣는다. 
    printf("%d\n",(a + b) % c);
    printf("%d\n",(a % c + b % c) % c);
    printf("%d\n",(a * b) % c);
    printf("%d\n",(a % c * b % c) % c);
    return 0;
}
