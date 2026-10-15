#include<stdio.h>
int main(){
double s=0;
    double sum=0;
    double i=2;
    int cnt=0;
    scanf("%lf",&s);
    while(sum<s){
        sum+=i;
        i*=0.98;
        cnt++;
    }
    printf("%d",cnt);

    return 0;
}
