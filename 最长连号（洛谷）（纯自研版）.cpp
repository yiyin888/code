#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int cnt=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=j;k+1<n;k++){
            if(a[k]+1==a[k+1]){
                cnt++;
            }else{
                break;
            }
        }
        b[j]=cnt;
        cnt=1;
    }
    int max=b[0];
    for(int l=0;l<n;l++){
        max=(b[l]>max)? b[l]:max;
    }
    printf("%d",max);
    return 0;
}
