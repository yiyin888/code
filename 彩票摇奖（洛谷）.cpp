#include<stdio.h>
int main(){
    int n;
    int a[7];
    int i=0;
    int j=0,k=0;
    int cnt=0;
    scanf("%d",&n);
    for(i=0;i<7;i++){
        scanf("%d",&a[i]);
    }
    int arr[n][7];
    int jiang[7]={0};
    for(j=0;j<n;j++){
        for(k=0;k<7;k++){
            scanf("%d",&arr[j][k]);
            for(int l=0;l<7;l++){
                if(arr[j][k]==a[l]){
                    cnt++;
                }
            }
        }
        if(cnt>0){
        jiang[cnt-1]++;
        }
        cnt=0;
    }
    for(int b=6;b>=0;b--){
      printf("%d",jiang[b]);
        if(b>0){
        putchar(' ');
        }
    }
    return 0;
}
