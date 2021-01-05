#include<stdio.h>
#include<stdlib.h>
int main(void){
    float a[5],x=0;
    for(int i=0;i<5;i++){
        scanf("%f",&a[i]);
    }
    for(int i=0;i<5;i++){
        x+=a[i];
    }
    printf("%f",x);
}