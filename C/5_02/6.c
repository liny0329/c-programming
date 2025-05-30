#include <stdio.h>

int main() {
int i, a,s=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d\n",i);
    s=s+i;
    }
        printf("合計は%dです￥n",s);
    return 0;
}