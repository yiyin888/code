#include<stdio.h>
int main(){
int n=0;
    int sum=0;
    int n1;
scanf("%d",&n);
    if(n<0){
        n1=-n;
    }else{
        n1=n;
    }
    while(n1>0){
        sum=sum*10+n1%10;
        n1/=10;
    }
    if(n<0){
        printf("%d",-sum);
    }else {
        printf("%d",sum);
    }
    return 0;
}
