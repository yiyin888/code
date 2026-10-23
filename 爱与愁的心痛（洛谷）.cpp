#include<stdio.h>
int min(int a[],int n,int m);
int main(){
int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   printf("%d",min(a,n,m));
    return 0;
}
int min(int a[],int n,int m)
{
    int ret=0;
    int sum=0;
    for(int i=0;i<m;i++){
        ret+=a[i];
    }
    for(int j=0;j<n;j++){
         for(int c=0;c<m;c++){
             sum+=a[j+c];
         }
             if(j+m<=n&&sum<ret){
                 ret=sum;
             }
         sum=0;
    }
    return ret;
}
