#include<stdio.h>
int main(){
long long n=0;
    scanf("%lld",&n);
    while(n>0){
        printf("%lld ",n);
        n/=2;
    }
    return 0;
}
