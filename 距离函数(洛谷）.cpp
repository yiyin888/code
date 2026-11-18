#include<stdio.h>
#include<math.h>
double dis(double x1,double y1,double x2,double y2)
{
    double d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d;
}
int main(void){
    double a[6];
    for(int i=0;i<6;i++){
        scanf("%lf",&a[i]);
    }
    double sum=0;
    for(int i=0;i<6;i+=2){
        for(int j=i+2;j<6;j+=2){
            sum+=dis(a[i],a[i+1],a[j],a[j+1]);
        }
    }
    printf("%.2f",sum);
    return 0;
}
