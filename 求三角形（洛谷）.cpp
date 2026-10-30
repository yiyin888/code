#include<stdio.h>
int j(int n);
int main(void){
int n;
    int cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n*n;i++){
        printf("%02d",i);
        cnt++;
        if(cnt%n==0){
            printf("\n");
        }
    }
        printf("\n");
    
        int k=1;
    for(int i=1;i<=j(n);){
        int l=2*n;   
        
        cnt=0;
        for(int j=l;j>2*k;j--){
            printf(" ");
            cnt++;
        }
        for(int n=0;n<(l-cnt)/2;n++){
            printf("%02d",i);
        i++;
        }
        k++;
        printf("\n");   
    }
    return 0;
}
int j(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
