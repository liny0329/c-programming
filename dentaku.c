#include<stdio.h>

float tasu(float a,float b);
float hiku(float a,float b);
float kakeru(float a,float b);
float waru(float a,float b);
int main(void){
    int mode;
    float a,b,n;
printf("モードを選択してください（1:+,2:-,3:*,4:/）\n");
scanf("%d",&mode);
printf("一つ目の値の入力：\n");
scanf("%f",&a);
printf("二つ目の値の入力:\n");
scanf("%f",&b);

if(mode==1){
printf("足し算を選択されました\n");
n=tasu(a,b);
}else if(mode==2){
printf("引き算を選択されました\n");
n=hiku(a,b);
}else if(mode==3){
printf("掛け算を選択されました\n");
n=kakeru(a,b);
}else if(mode==4){
printf("割り算を選択されました\n");
n=waru(a,b);
}else{
    printf("不正なモード\n");
}
printf("答えは%fです\n",n);
return 0;
}
float tasu(float a,float b){
    return a+b;
}
float hiku(float a,float b){
    return a-b;
}
float kakeru(float a,float b){
    return a*b;
}
float waru(float a,float b){
    return a/b;
}