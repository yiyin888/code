#include<stdio.h>
int main(void){
    int k;
    scanf("%d",&k);
    int day=0;
    int sum=0;
    int c=0;
    while(day<k){
        c++;
            for(int j=1;j<=c&&day<k;j++){
                day++;
                sum+=c;
            }
    }

    printf("%d",sum);
    return 0;
}
