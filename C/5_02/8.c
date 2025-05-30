#include <stdio.h>

int main() {
    int i,c;
    for(int i=1;i<=10;i++){
        for(int c=1;c<=10;c++){
        printf("%4d\n",i*c);
        printf("\n");
        }
    }
    return 0;
}