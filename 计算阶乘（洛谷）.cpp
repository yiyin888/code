#include<stdio.h>
int j(int n){
    if(n==1||n==0){
        return 1;
    }else{
        return n*j(n-1);
    }
}
int main(void){
    int n;
scanf("%d",&n);
    printf("%d",j(n));
    return 0;
}
