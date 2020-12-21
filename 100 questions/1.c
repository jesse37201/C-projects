#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b,c,count;
    for(a=1;a<=4;a++){
        for(b=1;b<=4;b++){
            for(c=1;c<=4;c++){
                if(a!=b && b!=c && c!=a){
                    count++;
                }
            }
        }
    }
    printf("1234 four numbers have %d combinations ",count);
    system("pause");
    return 0;
}