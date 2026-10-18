#include<stdio.h>
int main(){
int a[5];
    int cnt=0;
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    int i=0;
    for(i=0;i<5;i++){
        if(a[i]>=1000&&a[i]<=9999){
            if(a[i]%10==a[i]%1000/100+1&&a[i]%100/10==a[i]/1000){
                cnt++;
            }  
        }
    }
    printf("%d",cnt);
    return 0;
}
