#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    int min;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==0){
            min=a[0];
        }
        min=(a[i]<min)? a[i]:min;
    }
    printf("%d",min);
    return 0;

}
