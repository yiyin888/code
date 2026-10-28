#include<stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    int cnt=0;
    while(a!=1){
        a/=2;
        cnt++;
    }
    printf("%d",cnt+1);
    return 0;
}
