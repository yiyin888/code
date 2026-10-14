#include<stdio.h>
int main(){
int yan=0;
    int cnt=0;
    int n=0;
    int k=0;
    scanf("%d %d",&n,&k);
    cnt=n;
    yan+=n;
    while(yan>=k){
        yan-=k;
        yan++;
        cnt++;
    }
    printf("%d",cnt);
return 0;
}
