#include<stdio.h>
int main(){
int n=0;
    scanf("%d",&n);
    int sum=0;
    int i=1;
    int j=0;
    int k=0;
    for(i=1;i<=n;i++){
        if(i==0||i==2||i==1||i==9){
            sum+=i;
        }else{
        j=i;
        while(j!=0){
            k=j%10;
            if(k==0||k==1||k==2||k==9){
                sum+=i;
                break;
            }
           j/=10; 
        }
    }
    }
    printf("%d",sum);

    return 0;
}
