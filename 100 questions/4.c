#include<stdio.h>
#include<stdlib.h>
void PrintStar(int);
int main(void){
    int n;
    printf("Please input integer");
    scanf("%d",&n);
    PrintStar(n);
    system("pause");
    return 0;
}
void PrintStar(int n){
    for(int i=1;i<=n*2;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
        if(i==n*2){
            for(int j=i-2;j>=1;j--){
                if(j%2!=0){
                    for(int x=1;x<=j;x++){
                    printf("*");
                }
                printf("\n");
                }
            }
        }
    }
}