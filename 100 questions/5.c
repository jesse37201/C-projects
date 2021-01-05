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
    for(int i=1;i<=n;i++){
        for(int j=0;j<n*2-i*2;j++){
            if(i==1){
                for(j=0;j<=n/2+1;j++)
                printf(" ");
                break;
            }
                printf(" ");
        }
        for(int j=1;j<=i+3*(i-1);j++){
            printf("*");
        }
        
        printf("\n");
    }
}