#include <stdio.h>

int main() {
    int n = 5;
    // while文で5から1までカウントダウンしよう
    scanf("%d",&n);
    while (n>0){
    printf("%d\n",n);
    n--;
    }
    return 0;
}