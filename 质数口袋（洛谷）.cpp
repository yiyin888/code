#include<stdio.h>
#include<math.h>
int p(int i){
    int cnt=1;
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0){
            cnt=0;
            break;
        }
    }
    return cnt;
}
int main(void){
    int l;
    int sum=0;
    int cnt=0;
    scanf("%d",&l);
    for(int i=2;sum+i<=l;i++){
        if(p(i)){
            cnt++;
            sum+=i;
            printf("%d\n",i);
        }
    }
    printf("%d",cnt);
    return 0;
} 
