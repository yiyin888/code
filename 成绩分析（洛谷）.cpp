#include<stdio.h>
int main(){
int n=0;
    int max=0;
    int min=0;
    int k=0;
scanf("%d",&n);
    double sum=0;
    int a[n];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    max=min=a[0];
    for(k=1;k<n;k++){
        if(a[k]>max){
            max=a[k];
        }else if(a[k]<min){
            min=a[k];
        }
    }
    printf("%d\n%d\n%.2f\n",max,min,sum/n);

    return 0;
}
