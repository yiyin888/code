#include<stdio.h>
int main(){
int  n=-1;
    int i=0;
    int a[105];
    while(scanf("%d",&n)==1&&n!=0){
        if(n!=0){
            a[i]=n;
            i++;
        }
    }
    for(i-=1;i>=0;i--){
        printf("%d",a[i]);
        if(i>0){
            putchar(' ');
        }
    }

    return 0;
}
