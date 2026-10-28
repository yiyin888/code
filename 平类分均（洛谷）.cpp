#include<stdio.h>
int main(void){
    int n,k;
    scanf("%d %d",&n,&k);
    int suma=0;
    int sumb=0;
    int cnta=0;
    int cntb=0;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            suma+=i;
            cnta++;
        }else{
            sumb+=i;
            cntb++;
        }
        
    }
    printf("%.1f %.1f",suma*1.0/cnta,sumb*1.0/cntb);
    return 0;
}
