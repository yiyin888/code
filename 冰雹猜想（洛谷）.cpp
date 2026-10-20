#include<stdio.h>
int main(){
int n=0;
    int cnt=0;
    int i=0;
    scanf("%d",&n);
    int a[1000];
    a[0]=n;
    while(n>1){
    if(n%2!=0){
        n=n*3+1;
    }else{
        n/=2;
    }
    i++;
    a[i]=n;
    }
    for(i;i>=0;i--){
        printf("%d",a[i]);
        if(i>0){
        putchar(' ');
        }
    }
    return 0;
}
