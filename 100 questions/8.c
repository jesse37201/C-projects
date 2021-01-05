#include<stdio.h>
#include<stdlib.h>
int sun2(int n);
int main(void){
    int n;
    printf("Please input an integer:");
    scanf("%d",&n);
    
    printf("%d\n",sun2(n));
    system("pause");
    return 0;
}
int sun2(int n){
    if(n>=1){
        return sun2(n-1)+2*n;
    }
    else{
        return 0; 
    }
}