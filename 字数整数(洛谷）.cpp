#include<stdio.h>
int main(){
int k=0;
    int i=0;
    int a1=0,a2=0,a3=0;
    int cnt=0;
    scanf("%d",&k);
    for(i=10000;i<=30000;i++){
        a1=i/100;
        a2=i/10%1000;
        a3=i%1000;
        if(a1%k==0&&a2%k==0&&a3%k==0){
            printf("%d\n",i);
            cnt++;
        }

    }
    if(cnt==0){
        printf("No");
    }

return 0;
}
