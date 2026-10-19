#include<stdio.h>
int main(){
double n=0;
    int v=0;
    int cnt=0;
    scanf("%lf",&n);
    for(v=1;v<n;v++){
        if(v*v%(int)n<n/2.0){
            cnt++;
        }
    }
printf("%d",cnt);
    return 0;
}
