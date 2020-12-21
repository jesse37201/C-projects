#include<stdio.h>
#include<stdlib.h>
void print(int);
int main(void){
    int n=0;
    printf("Please input integer");
    scanf("%d",&n);
    print(n);
    system("pause");
    return 0;
}
void print(int n){
    for(int i=1;i<=n;i++){
         if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("*");
            }
            printf("\n");
        }
         if(i==n){
            for(int x=n-1;x>=1;x--){
                if(x%2!=0){
                    for(int j=1;j<=x;j++){
                        printf("*");
                    }
                    printf("\n");
                }
            }        
        }
    }
}