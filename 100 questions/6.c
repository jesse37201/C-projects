#include<stdio.h>
#include<stdlib.h>
void PrintStar(int);
void main(void){
    int n;
    printf("Please input integer:");
    scanf("%d",&n);
    PrintStar(n);
    system("pause");
}
void PrintStar(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
}