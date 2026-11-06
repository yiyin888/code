#include<stdio.h>
int main(void){
    double s,x;
    scanf("%lf %lf",&s,&x);
    double sum=0;
    double z=7.0;
    // A chu v 0
    if(x>=s){
        if(x+s>=7){
            printf("y");
        }else{
            printf("n");
        }
    }else{
        for(int i=0;sum<s-x;i++){
            sum+=z;
            z*=0.98;
        }
        if(z>2*x-(sum-(s-x))){
            printf("n");
        }else{
            printf("y");
        }
    }
    return 0;
}
