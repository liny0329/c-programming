#include <stdio.h>

int main(void) {
    int num;
    printf("整数値は？￥n");
    scanf ("%d",&num);
    if(num%2!=0)
    printf("奇数です。￥n");
    else
    printf("偶数です。￥n");
    return 0;
}