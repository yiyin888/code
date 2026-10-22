#include<stdio.h>
int p(int x,int a[],int n);
int main(){
int n;
    int j;
    int cnt=0;
    scanf("%d",&n);
    int i=0;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
      if(p(a[j],a,n)){
          cnt++;
      }
    }
    printf("%d",cnt);
    return 0;
}
int p(int x,int a[],int n)
{
            for(int k=0;k<n;k++){
            for(int l=k+1;l<n;l++){
                if(x==a[k]+a[l]){
                    return 1;
                }
            }
        }
    return 0;
}
