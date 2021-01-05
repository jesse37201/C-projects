#include<stdio.h>
#include<stdlib.h>
int rsun(int);
int main(void){
    printf("Please input an integer:");
    int n;
    scanf("%d",&n);
    printf("%d\n",rsun(n));
    system("pause");
    return 0;
}
int rsun(int n){
    if(n>=1){
        return rsun(n-1)+(n-1)*n;
    }
    else{
        return 0;
    }
}