#include<stdio.h>
int cha(int i,int j);
int main(){
int n=0;
    int i=0;
    int n1=0;
    int cnt=0;
    int j=0;
    int k=0;
    scanf("%d",&n);
    int a[n];
    for(;i<n;i++){
      scanf("%d",&a[i]);
    }
       int arr[n-1];
        for(n1=0;n1<n-1;n1++){
            arr[n1]=n1+1;
        }
        for(j=0;j<n-1;j++){
            for(k=0;k<n-1;k++){
                if(arr[k]==cha(a[j],a[j+1])){
                    arr[k]=0;
                    cnt++;
                }
            }
            
        }
    if(cnt==n-1){
        printf("Jolly");
    }else{
        printf("Not jolly");
    }
    return 0;
}
int cha(int i,int j)
{
    int max;
    int min;
    if(i>j){
        max=i;
        min=j;
    }else{
        max=j;
        min=i;
    }
    return max-min;
}
