#include<stdio.h>
int main(void){
    int n;
    int x;
    scanf("%d",&n);
    int q;//前一位
    scanf("%d",&q);
    int cur=1;//当前连号
    int max=1;//最长连
    for(int i=1;i<n;i++){
        scanf("%d",&x);
        if(x==q+1){
            cur++;
        }else{
            cur=1;
        }
        if(cur>max){
            max=cur;
        }
        q=x;
    }
    printf("%d",max);
    return 0;
}
