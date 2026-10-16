#include<stdio.h>
int main(){
int n=0;
    scanf("%d",&n);
    int cnt=n;
    while(n>=3){
        n=n-3+1;
        cnt++;
    }
printf("%d",cnt);
    return 0;
}
