#include<stdio.h>
void pa(int a[],int n,int *p,int *q);
int main(void){
    int n;   
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p=a[0];
    int q=a[0];

      pa(a,n,&p,&q);
   
    printf("%d",q-p);

    return 0;
}
void pa(int a[],int n,int *p,int *q){

    for(int i=0;i<n;i++){
        if(a[i]<*p){
            *p=a[i];
        }
        if(a[i]>*q){
            *q=a[i];
        }
    }
}

