#include<stdio.h>
#include<math.h>
int z(int i);
int main(void){
    int n;
    scanf("%d",&n);
    int i,j;
    int max=0;
    for(i=2;i<sqrt(n);i++){
        if(z(i)&&n%i==0){
            printf("%d",n/i);
        }
    }   
    return 0;
}
int z(int i){
    int cnt=1;
    for(int j=2;j<i;j++){
        if(i%j==0){
            cnt=0;
            break;
        }
    }
    return cnt;
}
