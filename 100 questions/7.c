#include<stdio.h>
#include<stdlib.h>
int main(void){
    int N,remain=0,sun=3,n=2;
    printf("Please input integer");
    scanf("%d",&N);
    while(sun<N){
        n++;
        sun+=n;
        if(sun>N){
            sun-=n;
            n--;
            if(N>sun){
                remain=N-sun;
                break;
            }
        }
    }
    printf("input N=%d\nside length=%d\ntotle *=%d\nleft *=%d",N,n,sun,remain);
    system("pause");
    return 0;
}