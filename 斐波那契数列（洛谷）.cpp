#include<stdio.h>
#include<math.h>
int main(void){
double a,b;
    int n;
    double f;
    scanf("%d",&n);
    a=1;
    b=1;
    for(int i=0;i<n;i++){
        a=a*((1+sqrt(5))/2.0);
    }
        for(int i=0;i<n;i++){
        b=b*((1-sqrt(5))/2.0);
    }
    f=(a-b)/sqrt(5);
    printf("%.2f",f);

    return 0;
}
