#include<stdio.h>

float chohokei(float x,float y);

int main (void){
    float menseki=chohokei(5,6);
printf("%f\n",menseki);
    return 0;
}

float chohokei(float x,float y){
    float menseki;
    menseki=x*y;
    return menseki;
}