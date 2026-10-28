#include<stdio.h>
int main(void){
    int n;
    int cnt=1;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=0;j<i;j++,cnt++){
            printf("%02d",cnt);
        }
        printf("\n");
    }

    return 0;
}
