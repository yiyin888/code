#include<stdio.h>
void p(int a[],double n,int *p,int *q);
int main(void){
int n;
    double sum=0;
    int max;
    int min;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    max=min=a[0];
    p(a,n,&max,&min);
    printf("%.2f",(sum-max-min)/(n-2));
    return 0;
}
void p(int a[],double n,int *p,int *q)
{    
    for(int i=0;i<n;i++){
        *p=(a[i]>*p)? a[i]:*p;
        *q=(a[i]<*q)? a[i]:*q;
    }
}
