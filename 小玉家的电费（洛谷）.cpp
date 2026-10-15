#include<stdio.h>
int main(){
int n=0;
    double sum=0;
    scanf("%d",&n);
    if(n>=0&&n<=150){
        sum=n*0.4463;
    }else if(n>=151&&n<=400){
        sum=150*0.4463+(n-150)*0.4663;
    }else{
        sum=150*0.4463+(400-150)*0.4663+(n-400)*0.5663;
    }
    printf("%.1f",sum);
    return 0;
}
