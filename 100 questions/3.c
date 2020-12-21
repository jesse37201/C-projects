#include<stdio.h>
#include<stdlib.h>
void PrintStar(int);
int main(void){
    printf("Please input integer");
    int n;
    scanf("%d",&n);
    PrintStar(n);
    system("pause");
    return 0;
}
void PrintStar(int n){
    for(int i=1;i<=n;i++){
        for(int x=n-1;x>=i;x--){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}
