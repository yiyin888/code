#include<stdio.h>
int main(){
int m,n;
    int m1;
    int a[10]={0};
    scanf("%d %d",&m,&n);
    for(;m<=n;m++){
        m1=m;
        while(m1>0){
            a[m1%10]++;
            m1/=10;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
        if(i<9){
        putchar(' ');
        }
    }
    return 0;
}
